#include "HW05ElevatorPager.h"
#include "HW05Elevator.h"

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

void AHW05ElevatorPager::Interact()
{
	if (!IsValid(Elevator)) return;

	Elevator->SetDestination(TargetIndex);
}
