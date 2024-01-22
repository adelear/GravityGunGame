// Copyright Epic Games, Inc. All Rights Reserved.

#include "GravityGunGameMode.h"
#include "GravityGunCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGravityGunGameMode::AGravityGunGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
