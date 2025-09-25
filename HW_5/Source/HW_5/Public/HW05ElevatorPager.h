#pragma once

#include "CoreMinimal.h"
#include "HW05InteractableGimmickBase.h"
#include "HW05ElevatorPager.generated.h"

class AHW05Elevator;

UCLASS()
class HW_5_API AHW05ElevatorPager : public AHW05InteractableGimmickBase
{
	GENERATED_BODY()
	
public:
	AHW05ElevatorPager();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gimmick|Elevator")
	TObjectPtr<AHW05Elevator> Elevator;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gimmick|Elevator")
	int32 TargetIndex;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Interact(AActor* InteractFrom) override;

};
