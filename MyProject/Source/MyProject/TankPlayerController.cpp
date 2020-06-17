// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPlayerController.h"




void ATankPlayerController::BeginPlay()
{
  Super::BeginPlay();
  UE_LOG(LogTemp,Warning,TEXT("BeginPlay was called"))
  checkfortank();

}


ATank* ATankPlayerController::GetControlledTank() const
{
  
    return Cast<ATank>(GetPawn());

}

void ATankPlayerController::checkfortank() 
{
    TankInUse = GetPawn();
    if(!TankInUse)
    {
        UE_LOG(LogTemp,Warning,TEXT("No pawn was found"));
    }
    else 
    {
        UE_LOG(LogTemp,Warning,TEXT("%s was found as controlling pawn"),*TankInUse->GetName());
        GetControlledTank();
    }

}