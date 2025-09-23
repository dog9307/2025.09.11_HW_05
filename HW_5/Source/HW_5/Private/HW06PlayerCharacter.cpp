// Fill out your copyright notice in the Description page of Project Settings.


#include "HW06PlayerCharacter.h"
#include "EnhancedInputComponent.h"
#include "HW06PlayerController.h"

#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

#include "Kismet/KismetSystemLibrary.h"

#include "../CommonMacros.h"

// Sets default values
AHW06PlayerCharacter::AHW06PlayerCharacter()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	// Create Components
	CREATE_VALID_CHECK(UCapsuleComponent, Capsule, TEXT("Capsule"), );
	Capsule->SetCapsuleHalfHeight(93.0f);
	Capsule->SetCapsuleRadius(22.0f);
	Capsule->SetCollisionProfileName(TEXT("CharacterMesh"));
	Capsule->SetSimulatePhysics(false);
	SetRootComponent(Capsule);

	CREATE_VALID_CHECK(USkeletalMeshComponent, Skeletal, TEXT("Skeletal"), );
	Skeletal->SetSimulatePhysics(false);
	Skeletal->SetupAttachment(RootComponent);

	CREATE_VALID_CHECK(USpringArmComponent, SpringArmComp, TEXT("SpringArmComp"), );
	SpringArmComp->SetupAttachment(RootComponent);
	SpringArmComp->TargetArmLength = 300.0f;
	SpringArmComp->bUsePawnControlRotation = true;

	CREATE_VALID_CHECK(UCameraComponent, CameraComp, TEXT("Camera"), );
	CameraComp->SetupAttachment(SpringArmComp);
	CameraComp->bUsePawnControlRotation = false;

	// Properties
	// About Move
	NormalSpeed = 250.0f;
	SprintMultiplier = 2.0f;
	SprintSpeed = NormalSpeed * SprintMultiplier;
	CurrentSpeed = NormalSpeed;

	// About Jump
	JumpSpeed = 980.0f;
	Gravity = 9.8f;
	JumpAccel = 0.0f;
	bIsFalling = false;
	bIsCanDoubleJump = false;

	Direction = FVector::ZeroVector;
	Velocity = FVector::ZeroVector;

	// About Skeletal Rotation
	StartMeshRot = TargetMeshRot = FRotator(0.0f, 0.0f, 0.0f);
	RotAlpha = 0.1f;
}

// Called when the game starts or when spawned
void AHW06PlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (IsValid(Skeletal))
	{
		StartMeshRot = Skeletal->GetRelativeRotation();
		TargetMeshRot = StartMeshRot;
	}
}

// Called every frame
void AHW06PlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!bIsMoveInput && !IsFalling())
	{
		UE_LOG(LogTemp, Warning, TEXT("Why is this log nessesary??"));
		Velocity = FVector(0.0f, 0.0f, Velocity.Z);
	}

	CalcMeshRot();

	Move(DeltaTime);

	Falling(DeltaTime);

	LandingCheck(DeltaTime);
}

// Called to bind functionality to input
void AHW06PlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	CAST_VALID_CHECK(UEnhancedInputComponent, EnhancedInput, PlayerInputComponent, );
	CAST_VALID_CHECK(AHW06PlayerController, PlayerController, GetController(), );

	TObjectPtr<UInputAction> Target = nullptr;

	Target = PlayerController->GetBasicMoveAction();
	if (Target)
	{
		EnhancedInput->BindAction(
			Target,
			ETriggerEvent::Triggered,
			this,
			&AHW06PlayerCharacter::MoveInput
		);
	}

	Target = PlayerController->GetBasicJumpAction();
	if (Target)
	{
		EnhancedInput->BindAction(
			Target,
			ETriggerEvent::Triggered,
			this,
			&AHW06PlayerCharacter::StartJump
		);

		EnhancedInput->BindAction(
			Target,
			ETriggerEvent::Completed,
			this,
			&AHW06PlayerCharacter::StopJump
		);
	}

	Target = PlayerController->GetBasicLookAction();
	if (Target)
	{
		EnhancedInput->BindAction(
			Target,
			ETriggerEvent::Triggered,
			this,
			&AHW06PlayerCharacter::Look
		);
	}

	Target = PlayerController->GetBasicSprintAction();
	if (Target)
	{
		EnhancedInput->BindAction(
			Target,
			ETriggerEvent::Triggered,
			this,
			&AHW06PlayerCharacter::StartSprint
		);

		EnhancedInput->BindAction(
			Target,
			ETriggerEvent::Completed,
			this,
			&AHW06PlayerCharacter::StopSprint
		);
	}
}

void AHW06PlayerCharacter::MoveInput(const FInputActionValue& value)
{
	if (!Controller) return;

	const FVector2D MoveInput = value.Get<FVector2D>();

	FRotator targetRot = StartMeshRot;
	float YawOffset = 45.0f;

	Direction = FVector::ZeroVector;
	if (!FMath::IsNearlyZero(MoveInput.X))
	{
		Direction += CameraComp->GetForwardVector() * MoveInput.X;
		YawOffset = 0.0f;

		if (MoveInput.X < 0.0f)
		{
			targetRot.Add(0.0f, 180.0f, 0.0f);
		}
	}
	if (!FMath::IsNearlyZero(MoveInput.Y))
	{
		Direction += CameraComp->GetRightVector() * MoveInput.Y;
		if (MoveInput.Y > 0.0f)
		{
			if (FMath::IsNearlyEqual(targetRot.Yaw, -90.0f))
			{
				targetRot.Add(0.0f, 45.0f + YawOffset, 0.0f);
			}
			else
			{
				targetRot.Add(0.0f, -45.0f - YawOffset, 0.0f);
			}
		}
		else
		{
			if (FMath::IsNearlyEqual(targetRot.Yaw, -90.0f))
			{
				targetRot.Add(0.0f, -(45.0f + YawOffset), 0.0f);
			}
			else
			{
				targetRot.Add(0.0f, 45.0f - YawOffset, 0.0f);
			}
		}
	}

	TargetMeshRot = targetRot;

	CalcVelocity();

	bIsMoveInput = true;
}

void AHW06PlayerCharacter::Move(float DeltaTime)
{
	FVector VelocityXY = FVector(Velocity.X, Velocity.Y, 0.0f);
	VelocityXY.Normalize();
	VelocityXY *= CurrentSpeed * DeltaTime;
	if (!VelocityXY.IsNearlyZero())
	{
		VALID_CHECK(UWorld, World, GetWorld(), );

		TArray<AActor*> HitActors;
		TArray<FHitResult> HitResults;
		FVector OriginPos = GetActorLocation();
		UKismetSystemLibrary::CapsuleTraceMultiByProfile(
			World,
			OriginPos,
			OriginPos + VelocityXY,
			Capsule->GetScaledCapsuleRadius(),
			Capsule->GetScaledCapsuleHalfHeight(),
			Capsule->GetCollisionProfileName(),
			false,
			HitActors,
			EDrawDebugTrace::Type::None,
			HitResults,
			true
		);

		float MinDistance = VelocityXY.Length();
		for (const auto& Hit : HitResults)
		{
			if (MinDistance > Hit.Distance)
			{
				if (FMath::IsNearlyZero(Hit.Distance) && !IsFalling())
				{
					float MoveDistance = 1.0f;
					FVector NewPos = GetActorLocation() + FVector(0.0f, 0.0f, MoveDistance);
					SetActorLocation(NewPos);
					break;
				}
				else
				{
					VelocityXY.Normalize();
					VelocityXY *= Hit.Distance;
					MinDistance = VelocityXY.Length();
				}
			}
		}
	}

	float MoveDistance = (VelocityXY.Length() - 1.0f);
	VelocityXY.Normalize();
	VelocityXY *= MoveDistance;
	FVector NewPos = GetActorLocation() + VelocityXY;
	SetActorLocation(NewPos);

	bIsMoveInput = false;
}

void AHW06PlayerCharacter::StartJump(const FInputActionValue& value)
{
	if (IsCanDoubleJump())
	{
		if (IsFalling())
		{
			Velocity.Z = JumpSpeed;
			bIsCanDoubleJump = false;
			bIsFalling = true;
		}
	}
	else
	{
		if (!IsFalling())
		{
			Velocity.Z = JumpSpeed;
			bIsFalling = true;
		}
	}
}

void AHW06PlayerCharacter::StopJump(const FInputActionValue& value)
{
	if (Velocity.Z > 0.0f)
		Velocity.Z = 0.0f;
}

void AHW06PlayerCharacter::Look(const FInputActionValue& value)
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

void AHW06PlayerCharacter::StartSprint(const FInputActionValue& value)
{
	CurrentSpeed = SprintSpeed;
}

void AHW06PlayerCharacter::StopSprint(const FInputActionValue& value)
{
	CurrentSpeed = NormalSpeed;
}

void AHW06PlayerCharacter::CalcMeshRot()
{
	if (!IsValid(Skeletal)) return;

	Skeletal->SetRelativeRotation(FMath::Lerp(Skeletal->GetRelativeRotation(), TargetMeshRot, RotAlpha));
}

void AHW06PlayerCharacter::CalcVelocity()
{
	if (IsFalling()) return;

	Direction.Normalize();
	FVector NewVelocity = Direction * CurrentSpeed;
	NewVelocity.Z = Velocity.Z;
	Velocity = NewVelocity;
}

void AHW06PlayerCharacter::Falling(float DeltaTime)
{
	if (!IsFalling()) return;

	float VelocityZ = Velocity.Z * DeltaTime;
	if (!FMath::IsNearlyZero(VelocityZ))
	{
		VALID_CHECK(UWorld, World, GetWorld(), );

		TArray<AActor*> HitActors;
		TArray<FHitResult> HitResults;
		FVector OriginPos = GetActorLocation();
		UKismetSystemLibrary::CapsuleTraceMultiByProfile(
			World,
			OriginPos,
			OriginPos + FVector(0.0f, 0.0f, VelocityZ),
			Capsule->GetScaledCapsuleRadius(),
			Capsule->GetScaledCapsuleHalfHeight(),
			Capsule->GetCollisionProfileName(),
			false,
			HitActors,
			EDrawDebugTrace::Type::None,
			HitResults,
			true
		);

		for (const auto& Hit : HitResults)
		{
			if (VelocityZ > Hit.Distance)
			{
				if (Velocity.Z > 0.0f)
				{
					if (GetActorLocation().Z < Hit.GetActor()->GetActorLocation().Z)
					{
						VelocityZ = 0.0f;
						Velocity.Z = 0.0f;
					}
				}
				else
				{
					if (GetActorLocation().Z > Hit.GetActor()->GetActorLocation().Z)
					{
						VelocityZ = 0.0f;
						Velocity.Z = 0.0f;
					}
				}
			}
		}
	}

	float MoveDistance = (VelocityZ - 1.0f);
	FVector NewPos = GetActorLocation() + FVector(0.0f, 0.0f, MoveDistance);
	SetActorLocation(NewPos);

	Velocity.Z -= Gravity;
}

void AHW06PlayerCharacter::LandingCheck(float DeltaTime)
{
	VALID_CHECK(UWorld, World, GetWorld(), );

	TArray<AActor*> HitActors;
	TArray<FHitResult> HitResults;
	FVector OriginPos = GetActorLocation();
	UKismetSystemLibrary::CapsuleTraceMultiByProfile(
		World,
		OriginPos,
		OriginPos + FVector(0.0f, 0.0f, -1.0f),
		Capsule->GetScaledCapsuleRadius(),
		Capsule->GetScaledCapsuleHalfHeight(),
		Capsule->GetCollisionProfileName(),
		false,
		HitActors,
		EDrawDebugTrace::Type::None,
		HitResults,
		true
	);

	if (HitResults.Num() <= 0)
	{
		bIsFalling = true;
	}
	else
	{
		bIsFalling = false;
	}
}

