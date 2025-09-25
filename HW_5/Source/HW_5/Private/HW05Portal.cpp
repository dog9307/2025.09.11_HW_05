#include "HW05Portal.h"

#include "Components/BoxComponent.h"
#include "HW06PlayerCharacter.h"

#include "../CommonMacros.h"

AHW05Portal::AHW05Portal()
	:
	AHW05OverlapableGimmickBase()
{
	CREATE_VALID_CHECK(UBoxComponent, Collision, TEXT("Collision"), );
	Collision->SetupAttachment(SceneRoot);

	CREATE_VALID_CHECK(USceneComponent, TeleportationPoint, TEXT("TeleportationPoint"), );
	TeleportationPoint->SetupAttachment(SceneRoot);

	bIsLock = false;
}

void AHW05Portal::BeginPlay()
{
	Super::BeginPlay();

	if (!IsValid(pair))
		Lock();

	if (bIsLock)
		Lock();
	else
		Unlock();
}

void AHW05Portal::Activate(AActor* Activator)
{
	CAST_VALID_CHECK(AHW06PlayerCharacter, Player, Activator, );

	if (bIsLock || pair->bIsLock) return;

	Player->SetActorLocation(pair->TeleportationPoint->GetComponentLocation());

	CAST_VALID_CHECK(APlayerController, PlayerController, Player->GetController(), );
	PlayerController->SetControlRotation(pair->TeleportationPoint->GetComponentRotation());
}

void AHW05Portal::Lock()
{
	bIsLock = true;

	StaticMesh->SetVisibility(false);
}

void AHW05Portal::Unlock()
{
	bIsLock = false;

	StaticMesh->SetVisibility(true);
}
