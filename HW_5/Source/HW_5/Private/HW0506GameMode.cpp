// Fill out your copyright notice in the Description page of Project Settings.


#include "HW0506GameMode.h"
#include "HW06PlayerCharacter.h"
#include "HW06PlayerController.h"

AHW0506GameMode::AHW0506GameMode()
{
	DefaultPawnClass = AHW06PlayerCharacter::StaticClass();
	PlayerControllerClass = AHW06PlayerController::StaticClass();
}
