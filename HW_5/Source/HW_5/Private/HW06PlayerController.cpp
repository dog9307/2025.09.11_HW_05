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
	BasicInteract(nullptr),
	DroneIMC(nullptr),
	DroneMove(nullptr),
	DroneLook(nullptr),
	DroneBoost(nullptr),
	DroneInteract(nullptr)
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

	if (DroneIMC)
	{
		switch (mode)
		{
		case Basic:
		{
			SubSystem->RemoveMappingContext(DroneIMC);

			return true;
		}
		break;

		case Drone:
		{
			SubSystem->AddMappingContext(DroneIMC, mode);

			return true;
		}
		break;

		default:
			return false;
		}
	}

	return false;
}
