#include "HW05ElevatorPager.h"
#include "HW05Elevator.h"
#include "HW06PlayerCharacter.h"

#include "../CommonMacros.h"

AHW05ElevatorPager::AHW05ElevatorPager()
	:
	AHW05InteractableGimmickBase()
{
	TargetIndex = 0;
}

void AHW05ElevatorPager::BeginPlay()
{
	Super::BeginPlay();

	if (!IsValid(Elevator))
		Destroy();
}

void AHW05ElevatorPager::Interact(AActor* InteractFrom)
{
	CAST_VALID_CHECK(AHW06PlayerCharacter, Player, InteractFrom, );
	if (!IsValid(Elevator)) return;

	Elevator->SetDestination(TargetIndex);
}
