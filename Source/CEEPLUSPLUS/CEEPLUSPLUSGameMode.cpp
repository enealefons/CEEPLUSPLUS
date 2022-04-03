// Copyright Epic Games, Inc. All Rights Reserved.

#include "CEEPLUSPLUSGameMode.h"
#include "CEEPLUSPLUSCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACEEPLUSPLUSGameMode::ACEEPLUSPLUSGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
