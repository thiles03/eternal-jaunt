// Copyright Epic Games, Inc. All Rights Reserved.

#include "EternalJauntGameMode.h"
#include "EternalJauntCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEternalJauntGameMode::AEternalJauntGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
