#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "OverlapableGimmickInterface.h"
#include "HW06PlayerCharacter.generated.h"

class UCapsuleComponent;
class USpringArmComponent;
class UCameraComponent;
struct FInputActionValue;

UCLASS()
class HW_5_API AHW06PlayerCharacter : public APawn, public IOverlapableGimmickInterface
{
	GENERATED_BODY()

public:
	AHW06PlayerCharacter();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player|Components")
	TObjectPtr<UCapsuleComponent> Capsule;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player|Components")
	TObjectPtr<USkeletalMeshComponent> Skeletal;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player|Camera")
	TObjectPtr<USpringArmComponent> SpringArmComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player|Camera")
	TObjectPtr<UCameraComponent> CameraComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player|Components")
	TObjectPtr<UCapsuleComponent> InteractRange;

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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Jump")
	float MaxJumpingDuration;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player|Jump")
	bool bIsFalling;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player|Jump")
	bool bIsCanDoubleJump;

	float ReverseGravity;
	FTimerHandle JumpingTimerHandler;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player|Movement")
	FVector Direction;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player|Movement")
	FVector Velocity;

	// Skeletal Rotation
	FRotator StartMeshRot;
	FRotator TargetMeshRot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Mesh Rotation")
	float RotAlpha;


protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	void MoveInput(const FInputActionValue& value);
	void Move(float DeltaTime);
	void Look(const FInputActionValue& value);
	void StartSprint(const FInputActionValue& value);
	void StopSprint(const FInputActionValue& value);

	void Jump();
	void Jump(float JumpPower);
	void StopJumping();
	void StartJump(const FInputActionValue& value);
	void StopJump(const FInputActionValue& value);

	void CalcMeshRot();
	void CalcVelocity();
	void Falling(float DeltaTime);
	void LandingCheck(float DeltaTime);

	void StartInteract(const FInputActionValue& value);
	void StopInteract(const FInputActionValue& value);

	UFUNCTION(BlueprintPure, Category = "Movement")
	inline bool IsFalling() const { return bIsFalling; }
	inline bool IsCanDoubleJump() const { return bIsCanDoubleJump; }
	inline void SetDoubleJump(const bool& isCan) { bIsCanDoubleJump = isCan; }
	inline void SetVelocity(const FVector& vel) { Velocity = vel; }


	void OnBeginGimmickOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& HitResult) override;
	void OnEndGimmickOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) override;

};
