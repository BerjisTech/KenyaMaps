// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapLocation.generated.h"

UCLASS()
class KENYAMAPS_API AMapLocation : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMapLocation();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/**
	 * Variables
	 * @param string Name - Name of location (string)
	 * @param array Neighbors - Closest actor array (Editable)
	 * @param string LocationType
	 * @param string LocationCategory
	 *
	 */

	// @param array Neighbors - Closest actor array (Editable)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Variables")
	TArray<AMapLocation*> Neighbors;

	// @param string Name - Name of location (string)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables")
	FString Name;

	/**
	 * Variables
	 * @param string LocationType
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables")
	FString LocationType;

	/**
	 * @param string LocationCategory
	 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Variables")
	FString LocationCategory;
};
