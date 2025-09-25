#include "HW05ItemDoubleJump.h"

#include "HW06PlayerCharacter.h"

#include "../CommonMacros.h"

AHW05ItemDoubleJump::AHW05ItemDoubleJump()
	:
	AHW05ItemBase()
{
}

void AHW05ItemDoubleJump::Activate(AActor* Activator)
{
	CAST_VALID_CHECK(AHW06PlayerCharacter, Player, Activator, );

	Player->SetDoubleJump(true);

	Super::Activate(Activator);
}
