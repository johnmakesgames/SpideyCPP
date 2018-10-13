// Fill out your copyright notice in the Description page of Project Settings.

#include "Player_Base.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/GameEngine.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "WebPoint.h"

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
	directionalSpeed = new FVector(0,0,0);
	movementSpeed = 500.0f;
	CharacterMovement->MaxWalkSpeed = maxWalkingSpeed;
}

// Called every frame
void APlayer_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	delta = DeltaTime;
	
	FVector NewDirection;
	AddMovementInput(GetActorForwardVector(), directionalSpeed->X * DeltaTime);
	AddMovementInput(GetActorRightVector(), directionalSpeed->Y * DeltaTime);

	yawChange = currentRotX * DeltaTime;
	pitchChange = FRotator{ currentRotY*DeltaTime, 0, 0 };
	CharacterMovement->MaxWalkSpeed = movementSpeed;

	dancing = false;

}

// Called to bind functionality to input
void APlayer_Base::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("Forward", this, &APlayer_Base::MoveForward);
	PlayerInputComponent->BindAxis("Right", this, &APlayer_Base::MoveRight);
	PlayerInputComponent->BindAxis("Right Trigger", this, &APlayer_Base::Web);
	PlayerInputComponent->BindAxis("Yaw", this, &APlayer_Base::Yaw);
	PlayerInputComponent->BindAxis("Pitch", this, &APlayer_Base::Pitch);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &APlayer_Base::JumpAction);
	PlayerInputComponent->BindAction("Dance", IE_Pressed, this, &APlayer_Base::Dance);
}

void APlayer_Base::MoveForward(float value)
{
	if (value != 0)
	{
		directionalSpeed->X = value * movementSpeed;

	}
	else
	{
		if (directionalSpeed->X > 0)
		{
			directionalSpeed->X -= 1000 * delta;
			directionalSpeed->X = (directionalSpeed->X < 0) ? directionalSpeed->X = 0 : directionalSpeed->X;
		}
		else if (directionalSpeed->X < 0)
		{
			directionalSpeed->X += 1000 * delta;
			directionalSpeed->X = (directionalSpeed->X > 0) ? directionalSpeed->X = 0 : directionalSpeed->X;
		}
	}
	animMovementSpeedForward = (directionalSpeed->X / 5);
}

void APlayer_Base::MoveRight(float value)
{
	if (value != 0)
	{
		directionalSpeed->Y = value * movementSpeed;

	}
	else
	{
		if (directionalSpeed->Y > 0)
		{
			directionalSpeed->Y -= (movementSpeed*4) * delta;
			directionalSpeed->Y = (directionalSpeed->Y < 0) ? directionalSpeed->Y = 0 : directionalSpeed->Y;
		}
		else if (directionalSpeed->Y < 0)
		{
			directionalSpeed->Y += (movementSpeed * 4) * delta;
			directionalSpeed->Y = (directionalSpeed->Y > 0) ? directionalSpeed->Y = 0 : directionalSpeed->Y;
		}
	}
	
	animMovementSpeedRight = (directionalSpeed->Y / 5) *-1;
	
}

void APlayer_Base::Web(float value)
{
	if (value > 0)
	{
		if (grounded)
		{
			if (movementSpeed <= maxWalkingSpeed)
			{
				movementSpeed = maxRunningSpeed;
				FString TheFloatStr = FString::SanitizeFloat(movementSpeed);
				if (GEngine)
					GEngine->AddOnScreenDebugMessage(-1, 1.0, FColor::Red, *TheFloatStr);
			}
		}
		else
		{
			if (!swinging)
			{
				FindSwingPoint();
			}
			/*if (GEngine)
				GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Web Pressed"));*/
		}
	}
	else
	{
		movementSpeed = maxWalkingSpeed;
	}
	
}

void APlayer_Base::Yaw(float value)
{
	currentRotX = value * rotationSpeed;
}

void APlayer_Base::Pitch(float value)
{
	currentRotY = value * rotationSpeed;
}

void APlayer_Base::JumpAction()
{
	Jump();
}

void APlayer_Base::Dance()
{
	dancing = true;
}

void APlayer_Base::SetScannedObjects(TArray<AWebPoint*> scannedLocations)
{
	PotentialWebPoints = scannedLocations;
	int scannedNum = PotentialWebPoints.Num();
	FVector currentClosest;
	for (int i = 0; i < scannedNum; i++)
	{
		if (i == 0)
		{
			currentClosest = PotentialWebPoints[i]->GetActorLocation();
		}
		else if (FGenericPlatformMath::Abs(GetActorLocation().Y - currentClosest.Y) > FGenericPlatformMath::Abs(GetActorLocation().Y - PotentialWebPoints[i]->GetActorLocation().Y))
		{
			currentClosest = PotentialWebPoints[i]->GetActorLocation();
		}
	}
	swingPoint = currentClosest;
	swinging = true;
}



