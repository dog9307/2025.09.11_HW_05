#include "HW06Drone.h"

#include "EnhancedInputComponent.h"
#include "HW06PlayerCharacter.h"
#include "HW06PlayerController.h"

#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"

#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

#include "Kismet/KismetSystemLibrary.h"

#include "../CommonMacros.h"

AHW06Drone::AHW06Drone()
{
	PrimaryActorTick.bCanEverTick = true;

	// Create Components
	CREATE_VALID_CHECK(USphereComponent, Sphere, TEXT("Sphere"), );
	Sphere->SetSphereRadius(400.0f);
	Sphere->SetCollisionProfileName(TEXT("CharacterMesh"));
	Sphere->SetSimulatePhysics(false);
	SetRootComponent(Sphere);

	CREATE_VALID_CHECK(UStaticMeshComponent, StaticMesh, TEXT("StaticMesh"), );
	StaticMesh->SetSimulatePhysics(false);
	StaticMesh->SetupAttachment(RootComponent);

	CREATE_VALID_CHECK(USpringArmComponent, SpringArmComp, TEXT("SpringArmComp"), );
	SpringArmComp->SetupAttachment(RootComponent);
	SpringArmComp->TargetArmLength = 1000.0f;
	SpringArmComp->bUsePawnControlRotation = true;

	CREATE_VALID_CHECK(UCameraComponent, CameraComp, TEXT("Camera"), );
	CameraComp->SetupAttachment(SpringArmComp);
	CameraComp->bUsePawnControlRotation = false;

	CREATE_VALID_CHECK(USceneComponent, OwnerGetOffPos, TEXT("OwnerGetOffPos"), );
	OwnerGetOffPos->SetupAttachment(Sphere);

	// Properties
	// About Move
	NormalSpeed = 1000.0f;
	BoostMultiplier = 2.0f;
	BoostSpeed = NormalSpeed * BoostMultiplier;
	CurrentSpeed = NormalSpeed;
	bIsMoveInput = false;
	bIsBoostOn = false;
	bIsOnLand = true;

	Direction = FVector::ZeroVector;
	Velocity = FVector::ZeroVector;

	Owner = nullptr;
}

void AHW06Drone::BeginPlay()
{
	Super::BeginPlay();
	
}

void AHW06Drone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!IsValid(Owner)) return;

	if (!bIsMoveInput)
	{
		Velocity = FVector::ZeroVector;
	}

	bool prevLanding = bIsOnLand;

	Move(DeltaTime);

	LandingCheck(DeltaTime);
}

void AHW06Drone::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	CAST_VALID_CHECK(UEnhancedInputComponent, EnhancedInput, PlayerInputComponent, );
	CAST_VALID_CHECK(AHW06PlayerController, PlayerController, GetController(), );

	TObjectPtr<UInputAction> Target = nullptr;

	Target = PlayerController->GetDroneMoveAction();
	if (Target)
	{
		EnhancedInput->BindAction(
			Target,
			ETriggerEvent::Triggered,
			this,
			&AHW06Drone::MoveInput
		);
	}

	Target = PlayerController->GetDroneLookAction();
	if (Target)
	{
		EnhancedInput->BindAction(
			Target,
			ETriggerEvent::Triggered,
			this,
			&AHW06Drone::Look
		);
	}

	Target = PlayerController->GetDroneBoostAction();
	if (Target)
	{
		EnhancedInput->BindAction(
			Target,
			ETriggerEvent::Triggered,
			this,
			&AHW06Drone::StartBoost
		);

		EnhancedInput->BindAction(
			Target,
			ETriggerEvent::Completed,
			this,
			&AHW06Drone::StopBoost
		);
	}

	Target = PlayerController->GetDroneInteractAction();
	if (Target)
	{
		EnhancedInput->BindAction(
			Target,
			ETriggerEvent::Triggered,
			this,
			&AHW06Drone::StartGetOff
		);

		EnhancedInput->BindAction(
			Target,
			ETriggerEvent::Completed,
			this,
			&AHW06Drone::StopGetOff
		);
	}
}
void AHW06Drone::MoveInput(const FInputActionValue& value)
{
	if (!IsValid(Owner)) return;
	if (!Controller) return;

	const FVector MoveInput = value.Get<FVector>();

	Direction = FVector::ZeroVector;
	if (!FMath::IsNearlyZero(MoveInput.X))
	{
		FVector Forward = CameraComp->GetForwardVector();
		Forward.Z = 0.0f;
		Forward.Normalize();
		Direction += Forward * MoveInput.X;
	}
	if (!FMath::IsNearlyZero(MoveInput.Y))
	{
		FVector Right = CameraComp->GetRightVector();
		Right.Z = 0.0f;
		Right.Normalize();
		Direction += Right * MoveInput.Y;
	}
	if (!FMath::IsNearlyZero(MoveInput.Z))
	{
		Direction += FVector::UpVector * MoveInput.Z;
	}

	CalcVelocity();

	bIsMoveInput = true;
}

void AHW06Drone::Move(float DeltaTime)
{
	FVector VelocityXYZ = Velocity;
	VelocityXYZ.Normalize();
	VelocityXYZ *= CurrentSpeed * DeltaTime;
	if (!VelocityXYZ.IsNearlyZero())
	{
		VALID_CHECK(UWorld, World, GetWorld(), );

		TArray<AActor*> HitActors;
		TArray<FHitResult> HitResults;
		FVector OriginPos = GetActorLocation();
		UKismetSystemLibrary::SphereTraceMultiByProfile(
			World,
			OriginPos,
			OriginPos + VelocityXYZ,
			Sphere->GetScaledSphereRadius(),
			Sphere->GetCollisionProfileName(),
			false,
			HitActors,
			EDrawDebugTrace::Type::None,
			HitResults,
			true
		);

		float MinDistance = VelocityXYZ.Length();
		for (const auto& Hit : HitResults)
		{
			if (Hit.Component == StaticMesh) continue;

			if (MinDistance > Hit.Distance)
			{
				if (FMath::IsNearlyZero(Hit.Distance))
				{
					break;
				}
				else
				{
					VelocityXYZ.Normalize();
					VelocityXYZ *= Hit.Distance - 1.0f;
					MinDistance = VelocityXYZ.Length();
				}
			}
		}
	}

	FVector NewPos = GetActorLocation() + VelocityXYZ;
	SetActorLocation(NewPos);

	bIsMoveInput = false;
}

void AHW06Drone::Look(const FInputActionValue& value)
{
	if (!Controller) return;

	const FVector2D LookInput = value.Get<FVector2D>();

	AddControllerYawInput(LookInput.X);
	AddControllerPitchInput(LookInput.Y);

	FRotator NewRot = Controller->GetDesiredRotation();
	NewRot.Pitch = 0.0f;
	NewRot.Roll = 0.0f;
	SetActorRotation(NewRot);
}

void AHW06Drone::StartBoost(const FInputActionValue& value)
{
	if (bIsBoostOn) return;

	CurrentSpeed = BoostSpeed;
	bIsBoostOn = true;
}

void AHW06Drone::StopBoost(const FInputActionValue& value)
{
	if (!bIsBoostOn) return;

	CurrentSpeed = NormalSpeed;
	bIsBoostOn = false;
}

void AHW06Drone::CalcVelocity()
{
	Direction.Normalize();
	Velocity = Direction * CurrentSpeed;
}

void AHW06Drone::LandingCheck(float DeltaTime)
{
	VALID_CHECK(UWorld, World, GetWorld(), );

	TArray<AActor*> HitActors;
	TArray<FHitResult> HitResults;
	FVector OriginPos = GetActorLocation();
	UKismetSystemLibrary::SphereTraceMultiByProfile(
		World,
		OriginPos,
		OriginPos + FVector(0.0f, 0.0f, -1.0f),
		Sphere->GetScaledSphereRadius(),
		Sphere->GetCollisionProfileName(),
		false,
		HitActors,
		EDrawDebugTrace::Type::None,
		HitResults,
		true
	);

	if (HitResults.Num() <= 0 ||
		(HitResults.Num() <= 1 && HitResults[0].Component == StaticMesh))
	{
		bIsOnLand = false;

		DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	}
	else
	{
		for (auto& Result : HitResults)
		{
			if (Result.Component == StaticMesh) continue;

			bIsOnLand = true;

			AttachToActor(Result.GetActor(), FAttachmentTransformRules::KeepWorldTransform);

			break;
		}
	}
}

void AHW06Drone::StartGetOff(const FInputActionValue& value)
{
	if (!IsValid(Owner)) return;

	GetOff();
}

void AHW06Drone::StopGetOff(const FInputActionValue& value)
{
}

void AHW06Drone::GetOff()
{
	if (!IsValid(Owner)) return;

	CAST_VALID_CHECK(AHW06PlayerController, PlayerController, GetController(), );

	PlayerController->Possess(Owner);
	PlayerController->ChangeIMC(PlayerInputMode::Basic);

	Owner->SetActorHiddenInGame(false);
	Owner->SetActorLocation(OwnerGetOffPos->GetComponentLocation());
	Owner = nullptr;
}

// Get On
void AHW06Drone::Interact(AActor* InteractFrom)
{
	if (Owner) return;

	CAST_VALID_CHECK(AHW06PlayerCharacter, Player, InteractFrom, );
	CAST_VALID_CHECK(AHW06PlayerController, PlayerController, Player->GetController(), );

	Owner = Player;
	Owner->SetActorHiddenInGame(true);
	Owner->SetVelocity(FVector::ZeroVector);

	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

	PlayerController->Possess(this);
	PlayerController->ChangeIMC(PlayerInputMode::Drone);
}

