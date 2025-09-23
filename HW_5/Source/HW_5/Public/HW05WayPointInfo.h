#pragma once

#include "CoreMinimal.h"
#include "HW05WayPointInfo.generated.h"

USTRUCT(Atomic, Blueprintable, BlueprintType)
struct FWayPointInfo
{
	GENERATED_BODY()

public:
	FWayPointInfo();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<AActor> Point;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Duration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Interval;
};
