#pragma once

#include "CoreMinimal.h"
#include "HW05RotatingMovingPlatform.h"
#include "OverlapableGimmickInterface.h"
#include "HW05SuperJumpPlane.generated.h"

class UBoxComponent;

UCLASS()
class HW_5_API AHW05SuperJumpPlane : public AHW05RotatingMovingPlatform, public IOverlapableGimmickInterface
{
	GENERATED_BODY()
	
public:	
	AHW05SuperJumpPlane();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Gimmick|Components")
	TObjectPtr<UBoxComponent> OverlapRange;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Gimmick|GimmickJump")
	float JumpPower;

public:
	void OnBeginGimmickOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& HitResult) override;
	void OnEndGimmickOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) override;
};
