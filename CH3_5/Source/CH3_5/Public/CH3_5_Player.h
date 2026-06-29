#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CH3_5_Player.generated.h"

UCLASS()
class CH3_5_API ACH3_5_Player : public ACharacter
{
	GENERATED_BODY()

public:
	ACH3_5_Player();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
