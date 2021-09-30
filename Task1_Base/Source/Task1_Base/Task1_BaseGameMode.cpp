// Copyright Epic Games, Inc. All Rights Reserved.

#include "Task1_BaseGameMode.h"
#include "Task1_BaseCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATask1_BaseGameMode::ATask1_BaseGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
