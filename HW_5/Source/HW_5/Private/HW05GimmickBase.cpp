#include "HW05GimmickBase.h"

#include "Components/StaticMeshComponent.h"

#include "../CommonMacros.h"

AHW05GimmickBase::AHW05GimmickBase()
{
	PrimaryActorTick.bCanEverTick = false;

	CREATE_VALID_CHECK(USceneComponent, SceneRoot, TEXT("SceneRoot"), );
	SetRootComponent(SceneRoot);

	CREATE_VALID_CHECK(UStaticMeshComponent, StaticMesh, TEXT("StaticMesh"), );
	StaticMesh->SetupAttachment(SceneRoot);
}

