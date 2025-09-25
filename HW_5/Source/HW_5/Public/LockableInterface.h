#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LockableInterface.generated.h"

UINTERFACE(MinimalAPI)
class ULockableInterface : public UInterface
{
	GENERATED_BODY()
};

class HW_5_API ILockableInterface
{
	GENERATED_BODY()

public:
	virtual void Lock() = 0;
	virtual void Unlock() = 0;
};
