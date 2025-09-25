#pragma once

#include "CoreMinimal.h"
#include "HW05GimmickBase.h"
#include "InteractableInterface.h"
#include "HW05InteractableGimmickBase.generated.h"

class UTextRenderComponent;
class UMaterialInstanceDynamic;

UCLASS()
class HW_5_API AHW05InteractableGimmickBase : public AHW05GimmickBase, public IInteractableInterface
{
	GENERATED_BODY()

public:
	AHW05InteractableGimmickBase();
	
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Gimmick|Text")
	TObjectPtr<UTextRenderComponent> Text;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gimmick|Text")
	float FadingDuration;

	TObjectPtr<UMaterialInstanceDynamic> DynamicMaterial;

	float CurrentTime;
	FTimerHandle FadingHandle;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	void StartTextFadeIn();
	void StartTextFadeOut();

	void IncreaseTextAlpha();
	void DecreaseTextAlpha();

	virtual void Interact(AActor* InteractFrom) override;

protected:
	void AlphaChange(float Alpha);
};
