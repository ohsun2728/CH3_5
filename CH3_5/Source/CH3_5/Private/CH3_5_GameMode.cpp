#include "CH3_5_GameMode.h"
#include "CH3_5_Player.h"
#include "CH3_5_PlayerController.h"
#include "CH3_5_GameState.h"

ACH3_5_GameMode::ACH3_5_GameMode()
{
	DefaultPawnClass = ACH3_5_Player::StaticClass();
	PlayerControllerClass = ACH3_5_PlayerController::StaticClass();
	GameStateClass = ACH3_5_GameState::StaticClass();
}