#include "HW05ItemKey.h"

#include "HW06PlayerCharacter.h"
#include "LockableInterface.h"

#include "../CommonMacros.h"

AHW05ItemKey::AHW05ItemKey()
	:
	AHW05ItemBase()
{
	Target = nullptr;
}

void AHW05ItemKey::BeginPlay()
{
	Super::BeginPlay();

	if (!Target)
		Destroy();
}

void AHW05ItemKey::Activate(AActor* Activator)
{
	CAST_VALID_CHECK(AHW06PlayerCharacter, Player, Activator, );

	ILockableInterface* Lockable = Cast<ILockableInterface>(Target);
	if (Lockable)
	{
		Lockable->Unlock();
	}

	Super::Activate(Activator);
}
