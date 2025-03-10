// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()


	public:

	ATank* GetControlledTank() const;

	AActor* TankInUse = nullptr;

	void checkfortank();
	virtual void  BeginPlay() override;

	
};
