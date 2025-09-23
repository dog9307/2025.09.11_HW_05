// Fill out your copyright notice in the Description page of Project Settings.


#include "HW06PlayerController.h"

#include "EnhancedInputSubsystems.h"

#include "../CommonMacros.h"

AHW06PlayerController::AHW06PlayerController()
	:
	BasicIMC(nullptr),
	BasicMove(nullptr),
	BasicJump(nullptr),
	BasicLook(nullptr),
	BasicSprint(nullptr),
	HelicopterIMC(nullptr),
	HelicopterMove(nullptr),
	HelicopterLook(nullptr),
	HelicopterRise(nullptr)
{
}

void AHW06PlayerController::BeginPlay()
{
	Super::BeginPlay();

	VALID_CHECK(ULocalPlayer, LocalPlayer, GetLocalPlayer(), );
	VALID_CHECK(UEnhancedInputLocalPlayerSubsystem, SubSystem, LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(), );

	if (BasicIMC)
	{
		SubSystem->AddMappingContext(BasicIMC, Basic);
	}
}

bool AHW06PlayerController::ChangeIMC(PlayerInputMode mode)
{
	VALID_CHECK(ULocalPlayer, LocalPlayer, GetLocalPlayer(), false);
	VALID_CHECK(UEnhancedInputLocalPlayerSubsystem, SubSystem, LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(), false);

	if (HelicopterIMC)
	{
		switch (mode)
		{
		case Basic:
		{
			SubSystem->RemoveMappingContext(HelicopterIMC);

			return true;
		}
		break;

		case Helicopter:
		{
			SubSystem->AddMappingContext(HelicopterIMC, mode);

			return true;
		}
		break;

		default:
			return false;
		}
	}

	return false;
}
