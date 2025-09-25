#include "HW05OverlapableGimmickBase.h"

#include "HW06PlayerCharacter.h"

#include "Components/ShapeComponent.h"

#include "../CommonMacros.h"


AHW05OverlapableGimmickBase::AHW05OverlapableGimmickBase()
	:
	AHW05GimmickBase(),
	Collision(nullptr)
{
}

void AHW05OverlapableGimmickBase::BeginPlay()
{
	Super::BeginPlay();

	BindEvents();
}

void AHW05OverlapableGimmickBase::BindEvents()
{
	if (!Collision) return;

	Collision->SetCollisionProfileName(TEXT("OverlapAll"));

	Collision->OnComponentBeginOverlap.AddDynamic(this, &AHW05OverlapableGimmickBase::OnBeginGimmickOverlap);
	Collision->OnComponentEndOverlap.AddDynamic(this, &AHW05OverlapableGimmickBase::OnEndGimmickOverlap);
}

void AHW05OverlapableGimmickBase::OnBeginGimmickOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& HitResult)
{
	CAST_VALID_CHECK(AHW06PlayerCharacter, Player, OtherActor, );

	Activate(Player);
}

void AHW05OverlapableGimmickBase::OnEndGimmickOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	CAST_VALID_CHECK(AHW06PlayerCharacter, Player, OtherActor, );
}

void AHW05OverlapableGimmickBase::Activate(AActor* Activator)
{

}
