#include "HW05RotatingMovingPlatform.h"


AHW05RotatingMovingPlatform::AHW05RotatingMovingPlatform()
	:
	AHW05MovingPlatformBase()
{
	RotationSpeed = FRotator::ZeroRotator;
	ArmLength = 0.0f;
}

void AHW05RotatingMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	FVector NewPos = StaticMesh->GetRelativeLocation();
	NewPos.X += ArmLength;
	StaticMesh->SetRelativeLocation(NewPos);
}

void AHW05RotatingMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!bIsMoveStart) return;

	Rotate(DeltaTime);
}

void AHW05RotatingMovingPlatform::Rotate(float DeltaTime)
{
	FRotator DeltaRot = (bIsForward ? RotationSpeed : -1.0f * RotationSpeed) * DeltaTime;
	AddActorWorldRotation(DeltaRot);
}
