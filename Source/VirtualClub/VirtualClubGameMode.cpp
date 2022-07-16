// Copyright Epic Games, Inc. All Rights Reserved.

#include "VirtualClubGameMode.h"
#include "VirtualClubHUD.h"
#include "VirtualClubCharacter.h"
#include "UObject/ConstructorHelpers.h"

AVirtualClubGameMode::AVirtualClubGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AVirtualClubHUD::StaticClass();
}
