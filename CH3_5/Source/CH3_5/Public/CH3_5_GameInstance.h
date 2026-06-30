#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "CH3_5_GameInstance.generated.h"

UCLASS()
class CH3_5_API UCH3_5_GameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UCH3_5_GameInstance();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "GameData")
	int32 TotalScore;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "GameData")
	int32 CurrentLevelIndex;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "GameData")
	bool bShouldShowMainMenu;

	UFUNCTION(BlueprintCallable, Category = "GameData")
	void AddToScore(int32 Amount);
};
