#include "HW05Elevator.h"

#include "Components/BoxComponent.h"

#include "../CommonMacros.h"

AHW05Elevator::AHW05Elevator()
	:
	AHW05MovingPlatformBase()
{
	CREATE_VALID_CHECK(UBoxComponent, OverlapRange, TEXT("OverlapRange"), );
	OverlapRange->SetupAttachment(SceneRoot);

	OverlapRange->OnComponentBeginOverlap.AddDynamic(this, &AHW05Elevator::OnBeginGimmickOverlap);
	OverlapRange->OnComponentEndOverlap.AddDynamic(this, &AHW05Elevator::OnEndGimmickOverlap);

	bIsCanPingPong = true;
	bIsMoveStart = false;
	bIsAlreadyOverlaped = false;
}

void AHW05Elevator::BeginPlay()
{
	Super::BeginPlay();

	SetActorLocation(WayPoints[DestinationIndex].Point->GetActorLocation());
}

void AHW05Elevator::OnBeginGimmickOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& HitResult)
{
	if (bIsMoveStart) return;
	if (bIsAlreadyOverlaped) return;

	bIsAlreadyOverlaped = true;

	CalcNextIndex();
	StartMove();
}

void AHW05Elevator::OnEndGimmickOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (bIsMoveStart) return;

	bIsAlreadyOverlaped = false;
}

void AHW05Elevator::Move(float DeltaTime)
{
	if (WayPoints.Num() <= 0) return;

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
		if (!bIsAlreadyOverlaped)
		{
			CurrentIndex = NextTargetIndex;

			if (CurrentIndex == DestinationIndex)
			{
				bIsMoveStart = false;
				return;
			}

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
		else
		{
			CurrentIndex = NextTargetIndex;

			bIsMoveStart = false;
		}
	}
}

void AHW05Elevator::SetDestination(const int32& Dest)
{
	if (CurrentIndex == Dest) return;

	DestinationIndex = Dest;

	if (CurrentIndex < DestinationIndex)
		bIsForward = true;
	else
		bIsForward = false;

	CalcNextIndex();

	StartMove();
}
