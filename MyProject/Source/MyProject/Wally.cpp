// Fill out your copyright notice in the Description page of Project Settings.

#include "Wally.h"


// Sets default values
AWally::AWally()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWally::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWally::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AWally::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

