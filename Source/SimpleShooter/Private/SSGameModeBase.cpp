// Created by Alexander Rodin. Simple Shooter Game. All Rights Reserved.

#include "SSGameModeBase.h"
#include "Player/SSCharacter.h"
#include "Player/SSPlayerController.h"

ASSGameModeBase::ASSGameModeBase()
{
    DefaultPawnClass = ASSCharacter::StaticClass();
    PlayerControllerClass = ASSPlayerController::StaticClass();
}
