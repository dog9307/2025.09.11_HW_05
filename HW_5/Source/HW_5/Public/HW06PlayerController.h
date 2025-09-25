#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "HW06PlayerController.generated.h"

class UInputMappingContext;
class UInputAction;

enum PlayerInputMode
{
	NONE = -1,
	Basic,
	Drone,
	END
};

UCLASS()
class HW_5_API AHW06PlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AHW06PlayerController();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Basic")
	TObjectPtr<UInputMappingContext> BasicIMC;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Basic")
	TObjectPtr<UInputAction> BasicMove;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Basic")
	TObjectPtr<UInputAction> BasicJump;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Basic")
	TObjectPtr<UInputAction> BasicLook;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Basic")
	TObjectPtr<UInputAction> BasicSprint;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Basic")
	TObjectPtr<UInputAction> BasicInteract;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Drone")
	TObjectPtr<UInputMappingContext> DroneIMC;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Drone")
	TObjectPtr<UInputAction> DroneMove;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Drone")
	TObjectPtr<UInputAction> DroneLook;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Drone")
	TObjectPtr<UInputAction> DroneBoost;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Drone")
	TObjectPtr<UInputAction> DroneInteract;

public:
	inline TObjectPtr<UInputAction> GetBasicMoveAction() { return BasicMove; }
	inline TObjectPtr<UInputAction> GetBasicJumpAction() { return BasicJump; }
	inline TObjectPtr<UInputAction> GetBasicLookAction() { return BasicLook; }
	inline TObjectPtr<UInputAction> GetBasicSprintAction() { return BasicSprint; }
	inline TObjectPtr<UInputAction> GetBasicInteractAction() { return BasicInteract; }

	inline TObjectPtr<UInputAction> GetDroneMoveAction() { return DroneMove; }
	inline TObjectPtr<UInputAction> GetDroneLookAction() { return DroneLook; }
	inline TObjectPtr<UInputAction> GetDroneBoostAction() { return DroneBoost; }
	inline TObjectPtr<UInputAction> GetDroneInteractAction() { return DroneInteract; }

protected:
	virtual void BeginPlay() override;

public:
	bool ChangeIMC(PlayerInputMode mode);
};
