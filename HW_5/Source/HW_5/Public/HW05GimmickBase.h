#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HW05GimmickBase.generated.h"

class UStaticMeshComponent;

UCLASS()
class HW_5_API AHW05GimmickBase : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Gimmick|Components")
	TObjectPtr<USceneComponent> SceneRoot;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Gimmick|Components")
	TObjectPtr<UStaticMeshComponent> StaticMesh;

public:
	AHW05GimmickBase();

};