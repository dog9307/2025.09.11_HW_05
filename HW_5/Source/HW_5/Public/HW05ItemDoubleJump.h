#pragma once

#include "CoreMinimal.h"
#include "HW05ItemBase.h"
#include "HW05ItemDoubleJump.generated.h"

UCLASS()
class HW_5_API AHW05ItemDoubleJump : public AHW05ItemBase
{
	GENERATED_BODY()

public:
	AHW05ItemDoubleJump();
	
	virtual void Activate(AActor* Activator) override;
};
