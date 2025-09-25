#pragma once

#include "CoreMinimal.h"
#include "HW05MovingPlatformBase.h"
#include "OverlapableGimmickInterface.h"
#include "HW05Elevator.generated.h"

class UBoxComponent;

UCLASS()
class HW_5_API AHW05Elevator : public AHW05MovingPlatformBase, public IOverlapableGimmickInterface
{
	GENERATED_BODY()
public:
	AHW05Elevator();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Gimmick|Elevator")
	TObjectPtr< UBoxComponent> OverlapRange;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Gimmick|Elevator")
	int32 DestinationIndex;

	bool bIsAlreadyOverlaped;

protected:
	virtual void BeginPlay() override;

public:
	virtual void OnBeginGimmickOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& HitResult) override;
	virtual void OnEndGimmickOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) override;

	virtual void Move(float DeltaTime) override;

	void SetDestination(const int32& Dest);

};
