#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "OverlapableGimmickInterface.generated.h"

UINTERFACE(MinimalAPI)
class UOverlapableGimmickInterface : public UInterface
{
	GENERATED_BODY()
};

class HW_5_API IOverlapableGimmickInterface
{
	GENERATED_BODY()

public:
	UFUNCTION()
	virtual void OnBeginGimmickOverlap(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& HitResult) = 0;
	UFUNCTION()
	virtual void OnEndGimmickOverlap(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex) = 0;
};
