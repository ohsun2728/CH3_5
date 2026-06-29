// Fill out your copyright notice in the Description page of Project Settings.


#include "CH3_5_Player.h"

// Sets default values
ACH3_5_Player::ACH3_5_Player()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACH3_5_Player::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACH3_5_Player::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACH3_5_Player::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

