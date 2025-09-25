#include "HW05SuperJumpPlane.h"

#include "HW06PlayerCharacter.h"

#include "Components/BoxComponent.h"

#include "../CommonMacros.h"

AHW05SuperJumpPlane::AHW05SuperJumpPlane()
	:
	AHW05RotatingMovingPlatform()
{
	CREATE_VALID_CHECK(UBoxComponent, OverlapRange, TEXT("OverlapRange"), );
	OverlapRange->SetupAttachment(SceneRoot);

	OverlapRange->OnComponentBeginOverlap.AddDynamic(this, &AHW05SuperJumpPlane::OnBeginGimmickOverlap);
	OverlapRange->OnComponentEndOverlap.AddDynamic(this, &AHW05SuperJumpPlane::OnEndGimmickOverlap);

	JumpPower = 1000.0f;
}

void AHW05SuperJumpPlane::OnBeginGimmickOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& HitResult)
{
	CAST_VALID_CHECK(AHW06PlayerCharacter, Player, OtherActor, );

	Player->Jump(JumpPower);
}

void AHW05SuperJumpPlane::OnEndGimmickOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}

