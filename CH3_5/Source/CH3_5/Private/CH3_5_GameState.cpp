#include "CH3_5_GameState.h"
#include "CH3_5_GameInstance.h"
#include "CH3_5_PlayerController.h"
#include "SpawnVolume.h"
#include "CoinItem.h"
#include "BaseItem.h"
#include "Kismet/GameplayStatics.h"
#include "Components/TextBlock.h"
#include "Blueprint/UserWidget.h"

ACH3_5_GameState::ACH3_5_GameState()
{
	Score = 0;
	SpawnedCoinCount = 0;
	CollectedCoinCount = 0;
	LevelDuration = 30.0f;
	CurrentLevelIndex = 0;
	MaxLevels = 3;

	LevelMapNames.Add(TEXT("CH3_5_Level_1"));
	LevelMapNames.Add(TEXT("CH3_5_Level_2"));
	LevelMapNames.Add(TEXT("CH3_5_Level_3"));

	FWaveSettings Wave1;
	Wave1.WaveDuration = 60.0f;
	Wave1.ItemSpawnCount = 30;

	FWaveSettings Wave2;
	Wave2.WaveDuration = 45.0f;
	Wave2.ItemSpawnCount = 20;

	FWaveSettings Wave3;
	Wave3.WaveDuration = 30.0f;
	Wave3.ItemSpawnCount = 10;

	WaveSettings.Add(Wave1);
	WaveSettings.Add(Wave2);
	WaveSettings.Add(Wave3);

	CurrentWaveIndex = 0;
}

void ACH3_5_GameState::BeginPlay()
{
	Super::BeginPlay();

	StartLevel();

	GetWorldTimerManager().SetTimer(
		HUDUpdateTimerHandle,
		this,
		&ACH3_5_GameState::UpdateHUD,
		0.1f,
		true
	);
}

int32 ACH3_5_GameState::GetScore() const
{
	return Score;
}

void ACH3_5_GameState::AddScore(int32 Amount)
{
	Score += Amount;
	UE_LOG(LogTemp, Warning, TEXT("Score: %d"), Score);

	if (UGameInstance* GameInstance = GetGameInstance())
	{
		UCH3_5_GameInstance* CH3_5_GameInstance = Cast<UCH3_5_GameInstance>(GameInstance);
		if (CH3_5_GameInstance)
		{
			CH3_5_GameInstance->AddToScore(Amount);
		}
	}
}

void ACH3_5_GameState::StartLevel()
{
	if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
	{
		if (ACH3_5_PlayerController* CH3_5_PlayerController = Cast<ACH3_5_PlayerController>(PlayerController))
		{
			CH3_5_PlayerController->ShowGameHUD();
		}
	}

	if (UGameInstance* GameInstance = GetGameInstance())
	{
		UCH3_5_GameInstance* CH3_5_GameInstance = Cast<UCH3_5_GameInstance>(GameInstance);
		if (CH3_5_GameInstance)
		{
			CurrentLevelIndex = CH3_5_GameInstance->CurrentLevelIndex;
		}
	}

	CurrentWaveIndex = 0;
	StartWave();
}

void ACH3_5_GameState::StartWave()
{
	ClearExistingItems();

	FString WaveMsg = FString::Printf(TEXT("Wave %d 시작!"), CurrentWaveIndex + 1);
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, WaveMsg);
	}
	UE_LOG(LogTemp, Warning, TEXT("%s"), *WaveMsg);

	SpawnedCoinCount = 0;
	CollectedCoinCount = 0;

	float CurrentWaveDuration = 30.f;
	int32 ItemSpawnCount = 30;

	if (WaveSettings.IsValidIndex(CurrentWaveIndex))
	{
		CurrentWaveDuration = WaveSettings[CurrentWaveIndex].WaveDuration;
		ItemSpawnCount = WaveSettings[CurrentWaveIndex].ItemSpawnCount;
	}

	LevelDuration = CurrentWaveDuration;

	TArray<AActor*> FoundVolumes;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASpawnVolume::StaticClass(), FoundVolumes);

	for (int32 i = 0; i < ItemSpawnCount; i++)
	{
		if (FoundVolumes.Num() > 0)
		{
			int32 RandIndex = FMath::RandRange(0, FoundVolumes.Num() - 1);
			ASpawnVolume* SpawnVolume = Cast<ASpawnVolume>(FoundVolumes[RandIndex]);
			if (SpawnVolume)
			{
				AActor* SpawnedActor = SpawnVolume->SpawnRandomItem();
				if (SpawnedActor && SpawnedActor->IsA(ACoinItem::StaticClass()))
				{
					SpawnedCoinCount++;
				}
			}
		}
	}

	GetWorldTimerManager().SetTimer(
		LevelTimerHandle,
		this,
		&ACH3_5_GameState::OnLevelTimeUp,
		LevelDuration,
		false
	);

	UpdateHUD();
}

void ACH3_5_GameState::EndWave()
{
	GetWorldTimerManager().ClearTimer(LevelTimerHandle);

	CurrentWaveIndex++;

	if (CurrentWaveIndex < WaveSettings.Num())
	{
		StartWave();
	}
	else
	{
		EndLevel();
	}
}

void ACH3_5_GameState::OnLevelTimeUp()
{
	OnGameOver();
}

void ACH3_5_GameState::OnCoinCollected()
{
	CollectedCoinCount++;

	UE_LOG(LogTemp, Warning, TEXT("Coin Collected: %d / %d"),
		CollectedCoinCount,
		SpawnedCoinCount);

	if (SpawnedCoinCount > 0 && CollectedCoinCount >= SpawnedCoinCount)
	{
		EndWave();
	}
}

void ACH3_5_GameState::EndLevel()
{
	GetWorldTimerManager().ClearTimer(LevelTimerHandle);

	if (UGameInstance* GameInstance = GetGameInstance())
	{
		UCH3_5_GameInstance* CH3_5_GameInstance = Cast<UCH3_5_GameInstance>(GameInstance);
		if (CH3_5_GameInstance)
		{
			CH3_5_GameInstance->CurrentLevelIndex++;
			CurrentLevelIndex = CH3_5_GameInstance->CurrentLevelIndex;
		}
		else
		{
			CurrentLevelIndex++;
		}
	}
	else
	{
		CurrentLevelIndex++;
	}

	if (CurrentLevelIndex >= MaxLevels)
	{
		OnGameOver();
		return;
	}

	if (LevelMapNames.IsValidIndex(CurrentLevelIndex))
	{
		UGameplayStatics::OpenLevel(GetWorld(), LevelMapNames[CurrentLevelIndex]);
	}
	else
	{
		OnGameOver();
	}
}

void ACH3_5_GameState::ClearExistingItems()
{
	TArray<AActor*> FoundItems;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABaseItem::StaticClass(), FoundItems);

	for (AActor* Item : FoundItems)
	{
		if (Item)
		{
			Item->Destroy();
		}
	}
}

void ACH3_5_GameState::OnGameOver()
{
	if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
	{
		if (ACH3_5_PlayerController* CH3_5_PlayerController = Cast<ACH3_5_PlayerController>(PlayerController))
		{
			CH3_5_PlayerController->SetPause(true);
			CH3_5_PlayerController->ShowGameOverMenu();
		}
	}
}

void ACH3_5_GameState::UpdateHUD()
{
	if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
	{
		ACH3_5_PlayerController* CH3_5_PlayerController = Cast<ACH3_5_PlayerController>(PlayerController);
		{
			if (UUserWidget* HUDWidget = CH3_5_PlayerController->GetHUDWidget())
			{
				if (UTextBlock* TimeText = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("Time"))))
				{
					float RemainingTime = GetWorldTimerManager().GetTimerRemaining(LevelTimerHandle);
					TimeText->SetText(FText::FromString(FString::Printf(TEXT("Time: %.1f"), RemainingTime)));
				}

				if (UTextBlock* ScoreText = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("Score"))))
				{
					if (UGameInstance* GameInstance = GetGameInstance())
					{
						UCH3_5_GameInstance* CH3_5_GameInstance = Cast<UCH3_5_GameInstance>(GameInstance);
						if (CH3_5_GameInstance)
						{
							ScoreText->SetText(FText::FromString(FString::Printf(TEXT("Score: %d"), CH3_5_GameInstance->TotalScore)));
						}
					}
				}

				if (UTextBlock* LevelIndexText = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("Level"))))
				{
					LevelIndexText->SetText(FText::FromString(FString::Printf(TEXT("Level: %d"), CurrentLevelIndex + 1)));
				}
			}
		}
	}
}