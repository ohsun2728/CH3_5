#include "CH3_5_GameInstance.h"

UCH3_5_GameInstance::UCH3_5_GameInstance()
{
	TotalScore = 0;
	CurrentLevelIndex = 0;
}

void UCH3_5_GameInstance::AddToScore(int32 Amount)
{
	TotalScore += Amount;
	UE_LOG(LogTemp, Warning, TEXT("Total Score Updated: %d"), TotalScore);
}