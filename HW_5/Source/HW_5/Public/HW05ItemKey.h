#pragma once

#include "CoreMinimal.h"
#include "HW05ItemBase.h"
#include "HW05ItemKey.generated.h"

UCLASS()
class HW_5_API AHW05ItemKey : public AHW05ItemBase
{
	GENERATED_BODY()

public:
	AHW05ItemKey();
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Gimmick|Key")
	AActor* Target;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Activate(AActor* Activator) override;
};
