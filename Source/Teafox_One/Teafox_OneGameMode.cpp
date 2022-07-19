// Copyright Epic Games, Inc. All Rights Reserved.

#include "Teafox_OneGameMode.h"
#include "Teafox_OneCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATeafox_OneGameMode::ATeafox_OneGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
