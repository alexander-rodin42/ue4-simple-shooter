// Created by Alexander Rodin. Simple Shooter Game. All Rights Reserved.


#include "Components/SSHealthComponent.h"

USSHealthComponent::USSHealthComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
}

float USSHealthComponent::GetHealth() const
{
    return Health;
}

void USSHealthComponent::BeginPlay()
{
    Super::BeginPlay();

    Health = MaxHealth;
}
