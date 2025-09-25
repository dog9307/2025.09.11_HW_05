#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "InteractableInterface.h"
#include "HW06Drone.generated.h"

class USphereComponent;
class USpringArmComponent;
class UCameraComponent;
class AHW06PlayerCharacter;
struct FInputActionValue;

UCLASS()
class HW_5_API AHW06Drone : public APawn, public IInteractableInterface
{
	GENERATED_BODY()

public:
	AHW06Drone();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Drone|Componenets")
	TObjectPtr<USphereComponent> Sphere;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Drone|Componenets")
	TObjectPtr<UStaticMeshComponent> StaticMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Drone|Camera")
	TObjectPtr<USpringArmComponent> SpringArmComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Drone|Camera")
	TObjectPtr<UCameraComponent> CameraComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Drone|Components")
	TObjectPtr<USceneComponent> OwnerGetOffPos;

	// Move
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Drone|Movement")
	float NormalSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Drone|Movement")
	float BoostMultiplier;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Drone|Movement")
	float BoostSpeed;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Drone|Movement")
	float CurrentSpeed;
	bool bIsMoveInput;
	bool bIsBoostOn;
	bool bIsOnLand;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Drone|Movement")
	FVector Direction;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Drone|Movement")
	FVector Velocity;

	TObjectPtr<AHW06PlayerCharacter> Owner;


protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	void MoveInput(const FInputActionValue& value);
	void Move(float DeltaTime);
	void Look(const FInputActionValue& value);
	void StartBoost(const FInputActionValue& value);
	void StopBoost(const FInputActionValue& value);

	void CalcVelocity();
	void LandingCheck(float DeltaTime);

	void StartGetOff(const FInputActionValue& value);
	void StopGetOff(const FInputActionValue& value);
	void GetOff();

	void Interact(AActor* InteractFrom) override;

};
