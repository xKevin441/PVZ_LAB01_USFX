// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Zombie.h"
#include "PVZ_LAB01_USFXGameMode.generated.h"

UCLASS(MinimalAPI)
class APVZ_LAB01_USFXGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APVZ_LAB01_USFXGameMode();
	TArray<class AZombie*> ZombieArray;
	TMap<FString, class APlant*> PlantMap;

	/*UFUNCTION()
	void DestroyActorFunction();*/

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};



