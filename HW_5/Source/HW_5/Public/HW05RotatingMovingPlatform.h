#pragma once

#include "CoreMinimal.h"
#include "HW05MovingPlatformBase.h"
#include "GimmickRotationInterface.h"
#include "HW05RotatingMovingPlatform.generated.h"

UCLASS()
class HW_5_API AHW05RotatingMovingPlatform : public AHW05MovingPlatformBase, public IGimmickRotationInterface
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gimmick|Rotation")
	FRotator RotationSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gimmick|Rotation")
	float ArmLength;

public:
	AHW05RotatingMovingPlatform();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	void Rotate(float DeltaTime) override;
};
