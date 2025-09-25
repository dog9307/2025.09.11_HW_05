#pragma once

#include "CoreMinimal.h"
#include "HW05OverlapableGimmickBase.h"
#include "LockableInterface.h"
#include "HW05Portal.generated.h"

UCLASS()
class HW_5_API AHW05Portal : public AHW05OverlapableGimmickBase, public ILockableInterface
{
	GENERATED_BODY()
	
public:
	AHW05Portal();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Gimmick|Portal")
	TObjectPtr<USceneComponent> TeleportationPoint;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gimmick|Portal")
	TObjectPtr<AHW05Portal> pair;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gimmick|Portal")
	bool bIsLock;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Activate(AActor* Activator) override;

	void Lock() override;
	void Unlock() override;
};
