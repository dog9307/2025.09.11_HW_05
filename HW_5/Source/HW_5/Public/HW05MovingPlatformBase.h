// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HW05GimmickBase.h"
#include "HW05WayPointInfo.h"
#include "HW05MovingPlatformBase.generated.h"

/**
 * 
 */
UCLASS()
class HW_5_API AHW05MovingPlatformBase : public AHW05GimmickBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gimmick|WayPoints")
	TArray<FWayPointInfo> WayPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gimmick|MoveSetting")
	bool bIsCanPingPong;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gimmick|MoveSetting")
	bool bIsForward;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gimmick|MoveSetting")
	bool bIsMoveStart;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Gimmick|MoveSetting")
	float CurrentTime;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Gimmick|MoveSetting")
	int32 CurrentIndex;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Gimmick|MoveSetting")
	int32 NextTargetIndex;

	FTimerHandle IntervalTimerHandle;

public:
	AHW05MovingPlatformBase();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	void Move(float DeltaTime);

	void StartMove();

	void CalcNextIndex();
	void SetIsForawrd(bool f);
	void SetIsCanPinpong(bool p);
};
