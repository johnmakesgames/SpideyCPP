// Fill out your copyright notice in the Description page of Project Settings.

#include "Player_Base.h"
#include "StaticMeshComponent.generated.h"

// Sets default values
APlayer_Base::APlayer_Base()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayer_Base::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayer_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayer_Base::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveForward", this, &APlayer_Base::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayer_Base::MoveRight);
	PlayerInputComponent->BindAction("Jump", this, &APlayer_Base::JumpAction);
	PlayerInputComponent->BindAxis("Web", this, &APlayer_Base::Web);
}

