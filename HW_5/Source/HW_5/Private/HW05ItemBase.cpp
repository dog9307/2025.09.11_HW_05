#include "HW05ItemBase.h"

#include "Components/SphereComponent.h"

#include "../CommonMacros.h"

AHW05ItemBase::AHW05ItemBase()
	:
	AHW05OverlapableGimmickBase()
{
	CREATE_VALID_CHECK(USphereComponent, Collision, TEXT("Collision"), );
	Collision->SetupAttachment(SceneRoot);
}

void AHW05ItemBase::Activate(AActor* Activator)
{
	Destroy();
}
