// Copyright Epic Games, Inc. All Rights Reserved.

#include "SwimbyGameMode.h"
#include "SwimbyCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASwimbyGameMode::ASwimbyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
