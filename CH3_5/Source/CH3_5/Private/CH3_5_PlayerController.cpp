#include "CH3_5_PlayerController.h"
#include "CH3_5_GameInstance.h"
#include "CH3_5_GameState.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Components/TextBlock.h"
#include "UObject/ConstructorHelpers.h"

ACH3_5_PlayerController::ACH3_5_PlayerController()
    : InputMappingContext(nullptr),
    MoveAction(nullptr),
    JumpAction(nullptr),
    LookAction(nullptr),
    HUDWidgetClass(nullptr),
    HUDWidgetInstance(nullptr),
    MainMenuWidgetClass(nullptr),
    MainMenuWidgetInstance(nullptr),
    GameOverWidgetClass(nullptr),
    GameOverWidgetInstance(nullptr)
{
}

void ACH3_5_PlayerController::BeginPlay()
{
    Super::BeginPlay();

    if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
    {
        if (UEnhancedInputLocalPlayerSubsystem* Subsystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
        {
            if (InputMappingContext)
            {
                Subsystem->AddMappingContext(InputMappingContext, 0);
            }
        }
    }

    if (UCH3_5_GameInstance* CH3_5_GameInstance = Cast<UCH3_5_GameInstance>(UGameplayStatics::GetGameInstance(this)))
    {
        if (CH3_5_GameInstance->bShouldShowMainMenu)
        {
            ShowMainMenu();
        }
    }
}

UUserWidget* ACH3_5_PlayerController::GetHUDWidget() const
{
    return HUDWidgetInstance;
}

void ACH3_5_PlayerController::ShowMainMenu()
{
	if (HUDWidgetInstance)
	{
		HUDWidgetInstance->RemoveFromParent();
		HUDWidgetInstance = nullptr;
	}

	if (GameOverWidgetInstance)
	{
		GameOverWidgetInstance->RemoveFromParent();
		GameOverWidgetInstance = nullptr;
	}

	if (MainMenuWidgetInstance)
	{
		MainMenuWidgetInstance->RemoveFromParent();
		MainMenuWidgetInstance = nullptr;
	}

	if (MainMenuWidgetClass)
	{
		MainMenuWidgetInstance = CreateWidget<UUserWidget>(this, MainMenuWidgetClass);
		if (MainMenuWidgetInstance)
		{
			MainMenuWidgetInstance->AddToViewport();

			bShowMouseCursor = true;
			SetInputMode(FInputModeUIOnly());
			SetPause(true);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to Create Widget: MainMenuWidgetInstance"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("MainMenuWidgetClass is NULL in ShowMainMenu"));
	}
}

void ACH3_5_PlayerController::ShowGameOverMenu()
{
	if (HUDWidgetInstance)
	{
		HUDWidgetInstance->RemoveFromParent();
		HUDWidgetInstance = nullptr;
	}

	if (MainMenuWidgetInstance)
	{
		MainMenuWidgetInstance->RemoveFromParent();
		MainMenuWidgetInstance = nullptr;
	}

	if (GameOverWidgetInstance)
	{
		GameOverWidgetInstance->RemoveFromParent();
		GameOverWidgetInstance = nullptr;
	}

	if (GameOverWidgetClass)
	{
		GameOverWidgetInstance = CreateWidget<UUserWidget>(this, GameOverWidgetClass);
		if (GameOverWidgetInstance)
		{
			GameOverWidgetInstance->AddToViewport();

			bShowMouseCursor = true;
			SetInputMode(FInputModeUIOnly());
		}
	}
}

void ACH3_5_PlayerController::ShowGameHUD()
{
	if (HUDWidgetInstance)
	{
		HUDWidgetInstance->RemoveFromParent();
		HUDWidgetInstance = nullptr;
	}

	if (MainMenuWidgetInstance)
	{
		MainMenuWidgetInstance->RemoveFromParent();
		MainMenuWidgetInstance = nullptr;
	}

	if (GameOverWidgetInstance)
	{
		GameOverWidgetInstance->RemoveFromParent();
		GameOverWidgetInstance = nullptr;
	}

	if (HUDWidgetClass)
	{
		HUDWidgetInstance = CreateWidget<UUserWidget>(this, HUDWidgetClass);
		if (HUDWidgetInstance)
		{
			HUDWidgetInstance->AddToViewport();

			bShowMouseCursor = false;
			SetInputMode(FInputModeGameOnly());

			ACH3_5_GameState* CH3_5_GameState = GetWorld() ? GetWorld()->GetGameState<ACH3_5_GameState>() : nullptr;
			if (CH3_5_GameState)
			{
				CH3_5_GameState->UpdateHUD();
			}
		}
	}
}

void ACH3_5_PlayerController::StartGame()
{
	if (UCH3_5_GameInstance* CH3_5_GameInstance = Cast<UCH3_5_GameInstance>(UGameplayStatics::GetGameInstance(this)))
	{
		CH3_5_GameInstance->CurrentLevelIndex = 0;
		CH3_5_GameInstance->TotalScore = 0;
		CH3_5_GameInstance->bShouldShowMainMenu = false;
	}

	SetPause(false);
	UGameplayStatics::OpenLevel(GetWorld(), FName("CH3_5_Level_1"));
}

void ACH3_5_PlayerController::GoToMainMenu()
{
	if (UCH3_5_GameInstance* CH3_5_GameInstance = Cast<UCH3_5_GameInstance>(UGameplayStatics::GetGameInstance(this)))
	{
		CH3_5_GameInstance->bShouldShowMainMenu = true;
	}

	SetPause(false);
	UGameplayStatics::OpenLevel(GetWorld(), FName("CH3_5_Level_1"));
}

void ACH3_5_PlayerController::QuitGame()
{
	UKismetSystemLibrary::QuitGame(GetWorld(), this, EQuitPreference::Quit, false);
}
