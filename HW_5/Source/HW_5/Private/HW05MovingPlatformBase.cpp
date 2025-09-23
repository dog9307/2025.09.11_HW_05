#include "HW05MovingPlatformBase.h"

#include "../CommonMacros.h"

AHW05MovingPlatformBase::AHW05MovingPlatformBase()
{
	PrimaryActorTick.bCanEverTick = true;

	for (auto& w : WayPoints)
	{
		w.Point->AttachToActor(nullptr, FAttachmentTransformRules::KeepWorldTransform);
	}

	bIsCanPingPong = false;
	bIsForward = true;

	CurrentTime = 0.0f;
	CurrentIndex = 0;

	NextTargetIndex = (bIsForward ? 1 : WayPoints.Num() - 1);

	bIsMoveStart = true;
}

void AHW05MovingPlatformBase::BeginPlay()
{
	Super::BeginPlay();

	NextTargetIndex = (bIsForward ? 1 : WayPoints.Num() - 1);
}

void AHW05MovingPlatformBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!bIsMoveStart) return;

	Move(DeltaTime);
}

void AHW05MovingPlatformBase::Move(float DeltaTime)
{
	CurrentTime += DeltaTime;

	const FWayPointInfo& CurrentPoint = WayPoints[CurrentIndex];
	const FWayPointInfo& TargetPoint = WayPoints[NextTargetIndex];

	float Ratio = CurrentTime / CurrentPoint.Duration;
	FVector StartPos = CurrentPoint.Point->GetActorLocation();
	FVector EndPos = TargetPoint.Point->GetActorLocation();
	FVector NewPos = FMath::Lerp(StartPos, EndPos, FMath::Clamp(Ratio, 0.0f, 1.0f));
	SetActorLocation(NewPos);

	if (Ratio >= 1.0f)
	{

		CurrentIndex = NextTargetIndex;
		CalcNextIndex();

		if (!FMath::IsNearlyZero(WayPoints[CurrentIndex].Interval))
		{
			VALID_CHECK(UWorld, World, GetWorld(), );

			bIsMoveStart = false;
			World->GetTimerManager().SetTimer(
				IntervalTimerHandle,
				this,
				&AHW05MovingPlatformBase::StartMove,
				WayPoints[CurrentIndex].Interval,
				false);
		}
		else
		{
			StartMove();
		}
	}
}

void AHW05MovingPlatformBase::StartMove()
{
	bIsMoveStart = true;
	CurrentTime = 0.0f;
}

void AHW05MovingPlatformBase::CalcNextIndex()
{
	if (bIsForward)
	{
		NextTargetIndex = CurrentIndex + 1;
		if (NextTargetIndex >= WayPoints.Num())
		{
			if (bIsCanPingPong)
			{
				bIsForward = false;
				NextTargetIndex = CurrentIndex - 1;
			}
			else
			{
				NextTargetIndex = 0;
			}
		}
	}
	else
	{
		NextTargetIndex = CurrentIndex - 1;
		if (NextTargetIndex < 0)
		{
			if (bIsCanPingPong)
			{
				bIsForward = true;
				NextTargetIndex = CurrentIndex + 1;
			}
			else
			{
				NextTargetIndex = WayPoints.Num() - 1;
			}
		}
	}
}

void AHW05MovingPlatformBase::SetIsForawrd(bool f)
{
	bIsForward = f;
}

void AHW05MovingPlatformBase::SetIsCanPinpong(bool p)
{
	bIsCanPingPong = p;
}