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
	Helicopter,
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Helicopter")
	TObjectPtr<UInputMappingContext> HelicopterIMC;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Helicopter")
	TObjectPtr<UInputAction> HelicopterMove;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Helicopter")
	TObjectPtr<UInputAction> HelicopterLook;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Helicopter")
	TObjectPtr<UInputAction> HelicopterRise;

public:
	inline TObjectPtr<UInputAction> GetBasicMoveAction() { return BasicMove; }
	inline TObjectPtr<UInputAction> GetBasicJumpAction() { return BasicJump; }
	inline TObjectPtr<UInputAction> GetBasicLookAction() { return BasicLook; }
	inline TObjectPtr<UInputAction> GetBasicSprintAction() { return BasicSprint; }

	inline TObjectPtr<UInputAction> GetHelicopterMoveAction() { return BasicMove; }
	inline TObjectPtr<UInputAction> GetHelicopterLookAction() { return HelicopterLook; }
	inline TObjectPtr<UInputAction> GetHelicopterRiseAction() { return HelicopterRise; }

protected:
	virtual void BeginPlay() override;

public:
	bool ChangeIMC(PlayerInputMode mode);
};
