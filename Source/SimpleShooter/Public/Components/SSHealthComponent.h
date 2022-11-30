// Created by Alexander Rodin. Simple Shooter Game. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SSHealthComponent.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class SIMPLESHOOTER_API USSHealthComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    USSHealthComponent();

    float GetHealth() const;

protected:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Health", meta = (ClampMin = "1.0", ClampMax = "1000.0")
    float MaxHealth = 100.0f;

    virtual void BeginPlay() override;

private:
    float Health = 0.0f;
};
