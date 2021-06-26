// Copyright Epic Games, Inc. All Rights Reserved.

#include "PhysAnimPlaygroundGameMode.h"
#include "PhysAnimPlaygroundCharacter.h"
#include "UObject/ConstructorHelpers.h"

APhysAnimPlaygroundGameMode::APhysAnimPlaygroundGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
