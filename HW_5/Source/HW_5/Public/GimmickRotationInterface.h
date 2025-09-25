#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GimmickRotationInterface.generated.h"

UINTERFACE(MinimalAPI)
class UGimmickRotationInterface : public UInterface
{
	GENERATED_BODY()
};

class HW_5_API IGimmickRotationInterface
{
	GENERATED_BODY()

public:
	virtual void Rotate(float DeltaTime) = 0;
};
