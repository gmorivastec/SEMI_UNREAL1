// Copyright Epic Games, Inc. All Rights Reserved.

#include "SEMESTREI_1GameMode.h"
#include "SEMESTREI_1Character.h"
#include "UObject/ConstructorHelpers.h"

ASEMESTREI_1GameMode::ASEMESTREI_1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
