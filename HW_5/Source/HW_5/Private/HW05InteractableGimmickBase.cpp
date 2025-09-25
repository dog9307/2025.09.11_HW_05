#include "HW05InteractableGimmickBase.h"

#include "Components/TextRenderComponent.h"

#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

#include "Camera/PlayerCameraManager.h"

#include "UObject/ConstructorHelpers.h"

#include "../CommonMacros.h"

AHW05InteractableGimmickBase::AHW05InteractableGimmickBase()
	:
	AHW05GimmickBase()
{
	PrimaryActorTick.bCanEverTick = true;

	CREATE_VALID_CHECK(UTextRenderComponent, Text, TEXT("Key"), );
	Text->SetText(FText::FromString("Press F"));
	Text->SetWorldSize(50.0f);
	Text->SetHorizontalAlignment(EHTA_Center);
	Text->SetVerticalAlignment(EVerticalTextAligment::EVRTA_TextCenter);
	Text->SetupAttachment(StaticMesh);

	static ConstructorHelpers::FObjectFinder<UMaterialInterface> NewMat(TEXT("/Engine/EngineMaterials/DefaultTextMaterialTranslucent.DefaultTextMaterialTranslucent"));
	if (NewMat.Succeeded())
	{
		Text->SetTextMaterial(NewMat.Object);
	}

	FadingDuration = 2.0f;
	CurrentTime = 0.0f;
}

void AHW05InteractableGimmickBase::BeginPlay()
{
	Super::BeginPlay();

	AlphaChange(0.0f);
}

void AHW05InteractableGimmickBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsValid(Text))
	{
		VALID_CHECK(UWorld, World, GetWorld(), );
		VALID_CHECK(APlayerCameraManager, PlayerCameraManager, UGameplayStatics::GetPlayerCameraManager(World, 0), );

		FRotator CameraRotation = PlayerCameraManager->GetCameraRotation();
		FVector X, Y, Z;
		UKismetMathLibrary::BreakRotIntoAxes(CameraRotation, X, Y, Z);
		X *= -1.0f;
		Y *= -1.0f;
		Z *= -1.0f;
		FRotator NewRot = UKismetMathLibrary::MakeRotationFromAxes(X, Y, Z);
		Text->SetWorldRotation(NewRot);
	}
}

void AHW05InteractableGimmickBase::StartTextFadeIn()
{
	VALID_CHECK(UWorld, World, GetWorld(), );

	World->GetTimerManager().ClearTimer(FadingHandle);
	World->GetTimerManager().SetTimer(
		FadingHandle,
		this,
		&AHW05InteractableGimmickBase::IncreaseTextAlpha,
		FApp::GetDeltaTime(),
		false
	);
}

void AHW05InteractableGimmickBase::StartTextFadeOut()
{
	VALID_CHECK(UWorld, World, GetWorld(), );

	World->GetTimerManager().ClearTimer(FadingHandle);
	World->GetTimerManager().SetTimer(
		FadingHandle,
		this,
		&AHW05InteractableGimmickBase::DecreaseTextAlpha,
		FApp::GetDeltaTime(),
		false
	);
}

void AHW05InteractableGimmickBase::IncreaseTextAlpha()
{
	CurrentTime += FApp::GetDeltaTime();
	float Alpha = CurrentTime / FadingDuration;
	Alpha = FMath::Clamp(Alpha, 0.0f, 1.0f);

	AlphaChange(Alpha);

	if (Alpha < 1.0f)
	{
		VALID_CHECK(UWorld, World, GetWorld(), );

		World->GetTimerManager().ClearTimer(FadingHandle);
		World->GetTimerManager().SetTimer(
			FadingHandle,
			this,
			&AHW05InteractableGimmickBase::IncreaseTextAlpha,
			FApp::GetDeltaTime(),
			false
		);
	}
}

void AHW05InteractableGimmickBase::DecreaseTextAlpha()
{
	CurrentTime -= FApp::GetDeltaTime();
	float Alpha = CurrentTime / FadingDuration;
	Alpha = FMath::Clamp(Alpha, 0.0f, 1.0f);

	AlphaChange(Alpha);

	if (Alpha < 1.0f)
	{
		VALID_CHECK(UWorld, World, GetWorld(), );

		World->GetTimerManager().ClearTimer(FadingHandle);
		World->GetTimerManager().SetTimer(
			FadingHandle,
			this,
			&AHW05InteractableGimmickBase::DecreaseTextAlpha,
			FApp::GetDeltaTime(),
			false
		);
	}
}

void AHW05InteractableGimmickBase::AlphaChange(float Alpha)
{
	FColor Color = Text->TextRenderColor;
	Color.A = Alpha * 255;
	Text->SetTextRenderColor(Color);
}

void AHW05InteractableGimmickBase::Interact()
{
}
