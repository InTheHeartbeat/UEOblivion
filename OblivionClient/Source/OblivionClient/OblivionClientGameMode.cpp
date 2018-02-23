// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "OblivionClientGameMode.h"
#include "OblivionClientCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOblivionClientGameMode::AOblivionClientGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
