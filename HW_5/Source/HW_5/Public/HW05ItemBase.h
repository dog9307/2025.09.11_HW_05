#pragma once

#include "CoreMinimal.h"
#include "HW05OverlapableGimmickBase.h"
#include "HW05ItemBase.generated.h"

UCLASS()
class HW_5_API AHW05ItemBase : public AHW05OverlapableGimmickBase
{
	GENERATED_BODY()

public:
	AHW05ItemBase();

	virtual void Activate(AActor* Activator) override;
};
