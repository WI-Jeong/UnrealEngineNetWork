// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "GameFramework/PlayerController.h"
#include "LoginPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class SAC1NETWORK_API ALoginPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ALoginPlayerController();



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
};
