// Copyright Epic Games, Inc. All Rights Reserved.

#include "PVZ_LAB01_USFXGameMode.h"
#include "PVZ_LAB01_USFXPawn.h"
#include "Zombie.h"
#include "Plant.h"

APVZ_LAB01_USFXGameMode::APVZ_LAB01_USFXGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = APVZ_LAB01_USFXPawn::StaticClass();
}

void APVZ_LAB01_USFXGameMode::BeginPlay()
{

	//spawn plants and zombies
	FVector SpawnLocationPlant = FVector(200.0f, 0.0f, 150.0f);
	FVector SpawnLocationPlant2;
	FVector SpawnLocationZombie = FVector(200.0f, 1500.0f, 150.0f);
	for (int j = 0; j < 5; j++)
	{
		SpawnLocationPlant.X -= 150.0f;
		APlant* NewPlantActor = GetWorld()->SpawnActor<APlant>(APlant::StaticClass(), SpawnLocationPlant, FRotator::ZeroRotator);
		PlantMap.Add("New plant", NewPlantActor);
		
		SpawnLocationPlant2 = SpawnLocationPlant;
		SpawnLocationPlant2.Y -= 150.0f;
		APlant* NewPlantActor2 = GetWorld()->SpawnActor<APlant>(APlant::StaticClass(), SpawnLocationPlant2, FRotator::ZeroRotator);
		PlantMap.Add("New plant 2", NewPlantActor);

	    SpawnLocationZombie.X -= 150.0f;
		AZombie* NewZombieActor = GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), SpawnLocationZombie, FRotator::ZeroRotator);
		ZombieArray.Add(NewZombieActor);
	}

}


