// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TGTutorialGameMode.h"
#include "TGTutorialHUD.h"
#include "TGTutorialCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATGTutorialGameMode::ATGTutorialGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATGTutorialHUD::StaticClass();
}
