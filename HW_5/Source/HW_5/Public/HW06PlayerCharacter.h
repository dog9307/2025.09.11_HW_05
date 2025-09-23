// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "HW06PlayerCharacter.generated.h"

class UCapsuleComponent;
class USpringArmComponent;
class UCameraComponent;
struct FInputActionValue;

UCLASS()
class HW_5_API AHW06PlayerCharacter : public APawn
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player|Components")
	TObjectPtr<UCapsuleComponent> Capsule;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player|Components")
	TObjectPtr<USkeletalMeshComponent> Skeletal;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player|Camera")
	TObjectPtr<USpringArmComponent> SpringArmComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player|Camera")
	TObjectPtr<UCameraComponent> CameraComp;

	// Move
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Movement")
	float NormalSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Movement")
	float SprintMultiplier;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player|Movement")
	float SprintSpeed;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player|Movement")
	float CurrentSpeed;
	bool bIsMoveInput;

	// Jump
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Jump")
	float JumpSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Jump")
	float Gravity;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player|Jump")
	float JumpAccel;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player|Jump")
	bool bIsFalling;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player|Jump")
	bool bIsCanDoubleJump;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player|Movement")
	FVector Direction;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player|Movement")
	FVector Velocity;

	// Skeletal Rotation
	FRotator StartMeshRot;
	FRotator TargetMeshRot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Mesh Rotation")
	float RotAlpha;


public:
	// Sets default values for this pawn's properties
	AHW06PlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	void MoveInput(const FInputActionValue& value);
	void Move(float DeltaTime);
	void Look(const FInputActionValue& value);
	void StartSprint(const FInputActionValue& value);
	void StopSprint(const FInputActionValue& value);

	void StartJump(const FInputActionValue& value);
	void StopJump(const FInputActionValue& value);


	void CalcMeshRot();
	void CalcVelocity();
	void Falling(float DeltaTime);
	void LandingCheck(float DeltaTime);

	UFUNCTION(BlueprintPure, Category = "Movement")
	inline bool IsFalling() const { return bIsFalling; }
	inline bool IsCanDoubleJump() const { return bIsCanDoubleJump; }
	inline void SetDoubleJump(bool& isCan) { bIsCanDoubleJump = isCan; }

};
