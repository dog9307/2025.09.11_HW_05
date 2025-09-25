#pragma once

#include "CoreMinimal.h"
#include "HW05GimmickBase.h"
#include "OverlapableGimmickInterface.h"
#include "HW05OverlapableGimmickBase.generated.h"

UCLASS()
class HW_5_API AHW05OverlapableGimmickBase : public AHW05GimmickBase, public IOverlapableGimmickInterface
{
	GENERATED_BODY()
	
public:
	AHW05OverlapableGimmickBase();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Gimmick|Components")
	TObjectPtr<UShapeComponent> Collision;

protected:
	virtual void BeginPlay() override;

	void BindEvents();

public:
	virtual void OnBeginGimmickOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& HitResult) override;
	virtual void OnEndGimmickOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) override;

	virtual void Activate(AActor* Activator);
};
