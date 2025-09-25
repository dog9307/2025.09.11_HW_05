#include "HW06PlayerCharacter.h"

#include "EnhancedInputComponent.h"
#include "HW06PlayerController.h"
#include "HW05InteractableGimmickBase.h"

#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"

#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

#include "Kismet/KismetSystemLibrary.h"

#include "../CommonMacros.h"

AHW06PlayerCharacter::AHW06PlayerCharacter()
{
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

	CREATE_VALID_CHECK(UCapsuleComponent, InteractRange, TEXT("InteractRange"), );
	InteractRange->SetCapsuleHalfHeight(Capsule->GetUnscaledCapsuleHalfHeight() / 2.0f);
	InteractRange->SetCapsuleRadius(Capsule->GetUnscaledCapsuleRadius());
	InteractRange->SetCollisionProfileName(TEXT("OverlapAll"));
	InteractRange->SetSimulatePhysics(false);
	InteractRange->SetupAttachment(Capsule);
	InteractRange->SetRelativeLocation(FVector(InteractRange->GetUnscaledCapsuleRadius() + 1.0f, 0.0f, 0.0f));

	// Properties
	// About Move
	NormalSpeed = 250.0f;
	SprintMultiplier = 2.0f;
	SprintSpeed = NormalSpeed * SprintMultiplier;
	CurrentSpeed = NormalSpeed;

	// About Jump
	JumpSpeed = 420.0f;
	Gravity = 9.8f;
	MaxJumpingDuration = 0.5f;
	bIsFalling = false;
	bIsCanDoubleJump = false;

	ReverseGravity = 0.0f;

	Direction = FVector::ZeroVector;
	Velocity = FVector::ZeroVector;

	// About Skeletal Rotation
	StartMeshRot = TargetMeshRot = FRotator(0.0f, 0.0f, 0.0f);
	RotAlpha = 0.1f;

	if (IsValid(InteractRange))
	{
		InteractRange->OnComponentBeginOverlap.AddDynamic(this, &AHW06PlayerCharacter::OnBeginGimmickOverlap);
		InteractRange->OnComponentEndOverlap.AddDynamic(this, &AHW06PlayerCharacter::OnEndGimmickOverlap);
	}
}

void AHW06PlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (IsValid(Skeletal))
	{
		StartMeshRot = Skeletal->GetRelativeRotation();
		TargetMeshRot = StartMeshRot;
	}
}

void AHW06PlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!bIsMoveInput && !IsFalling())
	{
		Velocity = FVector(0.0f, 0.0f, Velocity.Z);
	}

	CalcMeshRot();

	Move(DeltaTime);

	Falling(DeltaTime);

	LandingCheck(DeltaTime);
}

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
			ETriggerEvent::Started,
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

	Target = PlayerController->GetBasicInteractAction();
	if (Target)
	{
		EnhancedInput->BindAction(
			Target,
			ETriggerEvent::Triggered,
			this,
			&AHW06PlayerCharacter::StartInteract
		);

		EnhancedInput->BindAction(
			Target,
			ETriggerEvent::Completed,
			this,
			&AHW06PlayerCharacter::StopInteract
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
			if (Hit.Component == InteractRange) continue;

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

void AHW06PlayerCharacter::Jump()
{
	Velocity.Z = JumpSpeed;
	bIsFalling = true;
	ReverseGravity = Gravity;

	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

	VALID_CHECK(UWorld, World, GetWorld(), );

	World->GetTimerManager().ClearTimer(JumpingTimerHandler);
	World->GetTimerManager().SetTimer(
		JumpingTimerHandler,
		this,
		&AHW06PlayerCharacter::StopJumping,
		MaxJumpingDuration,
		false);
}

void AHW06PlayerCharacter::Jump(float JumpPower)
{
	Velocity.Z = JumpPower;
	bIsFalling = true;
	ReverseGravity = Gravity;

	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

	VALID_CHECK(UWorld, World, GetWorld(), );

	World->GetTimerManager().ClearTimer(JumpingTimerHandler);
	World->GetTimerManager().SetTimer(
		JumpingTimerHandler,
		this,
		&AHW06PlayerCharacter::StopJumping,
		MaxJumpingDuration,
		false);
}

void AHW06PlayerCharacter::StopJumping()
{
	ReverseGravity = 0.0f;

	VALID_CHECK(UWorld, World, GetWorld(), );

	World->GetTimerManager().ClearTimer(JumpingTimerHandler);
}

void AHW06PlayerCharacter::StartJump(const FInputActionValue& value)
{
	UE_LOG(LogTemp, Warning, TEXT("JUMP"));
	if (IsFalling() && IsCanDoubleJump())
	{
		Jump();
		bIsCanDoubleJump = false;
	}
	else
	{
		if (!IsFalling())
		{
			Jump();
		}
	}
}

void AHW06PlayerCharacter::StopJump(const FInputActionValue& value)
{
	UE_LOG(LogTemp, Warning, TEXT("JUMP END"));
	StopJumping();
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
	if (!IsFalling())

	CurrentSpeed = SprintSpeed;
}

void AHW06PlayerCharacter::StopSprint(const FInputActionValue& value)
{
	if (!IsFalling())

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
			if (Hit.Component == InteractRange) continue;

			if (VelocityZ > Hit.Distance)
			{
				if (Velocity.Z > 0.0f)
				{
					if (GetActorLocation().Z < Hit.GetActor()->GetActorLocation().Z)
					{
						VelocityZ = 0.0f;
						Velocity.Z = 0.0f;
						StopJumping();
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

	Velocity.Z -= (Gravity - ReverseGravity);
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

	if (HitResults.Num() <= 0 ||
		(HitResults.Num() <= 1 && HitResults[0].Component == InteractRange))
	{
		bIsFalling = true;

		DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	}
	else
	{
		for (auto& Result : HitResults)
		{
			if (Result.Component == InteractRange) continue;

			bIsFalling = false;

			AttachToActor(Result.GetActor(), FAttachmentTransformRules::KeepWorldTransform);

			break;
		}
	}
}

void AHW06PlayerCharacter::StartInteract(const FInputActionValue& value)
{
	VALID_CHECK(UWorld, World, GetWorld(), );

	TArray<AActor*> HitActors;
	TArray<FHitResult> HitResults;
	FVector OriginPos = InteractRange->GetComponentLocation();
	UKismetSystemLibrary::CapsuleTraceMultiByProfile(
		World,
		OriginPos,
		OriginPos + FVector(0.0f, 0.0f, -1.0f),
		InteractRange->GetScaledCapsuleRadius(),
		InteractRange->GetScaledCapsuleHalfHeight(),
		InteractRange->GetCollisionProfileName(),
		false,
		HitActors,
		EDrawDebugTrace::Type::None,
		HitResults,
		true
	);

	for (auto& r : HitResults)
	{
		IInteractableInterface* Interact = Cast<IInteractableInterface>(r.GetActor());
		if (Interact)
		{
			Interact->Interact(this);
			return;
		}
	}
}

void AHW06PlayerCharacter::StopInteract(const FInputActionValue& value)
{
}

void AHW06PlayerCharacter::OnBeginGimmickOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& HitResult)
{
	CAST_VALID_CHECK(AHW05InteractableGimmickBase, Gimmick, OtherActor, );

	Gimmick->StartTextFadeIn();
}

void AHW06PlayerCharacter::OnEndGimmickOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	CAST_VALID_CHECK(AHW05InteractableGimmickBase, Gimmick, OtherActor, );

	Gimmick->StartTextFadeOut();
}

