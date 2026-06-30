#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CH3_5_PlayerController.generated.h"

class UInputMappingContext;
class UInputAction;
class UUserWidget;

UCLASS()
class CH3_5_API ACH3_5_PlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	ACH3_5_PlayerController();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputMappingContext* InputMappingContext;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* MoveAction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* JumpAction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* LookAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD")
	TSubclassOf<UUserWidget> HUDWidgetClass;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "HUD")
	UUserWidget* HUDWidgetInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Menu")
	TSubclassOf<UUserWidget> MainMenuWidgetClass;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Menu")
	UUserWidget* MainMenuWidgetInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Menu")
	TSubclassOf<UUserWidget> GameOverWidgetClass;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Menu")
	UUserWidget* GameOverWidgetInstance;

	UFUNCTION(BlueprintPure, Category = "HUD")
	UUserWidget* GetHUDWidget() const;

	UFUNCTION(BlueprintCallable, Category = "Menu")
	void ShowMainMenu();

	UFUNCTION(BlueprintCallable, Category = "Menu")
	void ShowGameOverMenu();

	UFUNCTION(BlueprintCallable, Category = "HUD")
	void ShowGameHUD();

	UFUNCTION(BlueprintCallable, Category = "Menu")
	void StartGame();

	UFUNCTION(BlueprintCallable, Category = "Menu")
	void GoToMainMenu();

	UFUNCTION(BlueprintCallable, Category = "Menu")
	void QuitGame();

protected:
	virtual void BeginPlay() override;
};
