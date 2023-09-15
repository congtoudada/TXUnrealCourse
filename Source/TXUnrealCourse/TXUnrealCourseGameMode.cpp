// Copyright Epic Games, Inc. All Rights Reserved.

#include "TXUnrealCourseGameMode.h"
#include "TXUnrealCourseCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATXUnrealCourseGameMode::ATXUnrealCourseGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
