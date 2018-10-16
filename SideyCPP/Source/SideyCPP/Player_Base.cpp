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
	
	//FVector NewDirection;
	if (!swinging)
	{
		AddMovementInput(GetActorForwardVector(), directionalSpeed->X * DeltaTime);
		AddMovementInput(GetActorRightVector(), directionalSpeed->Y * DeltaTime);
	}

	yawChange = currentRotX * DeltaTime;
	pitchChange = FRotator{ currentRotY*DeltaTime, 0, 0 };
	CharacterMovement->MaxWalkSpeed = movementSpeed;
	Swing();
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
				if (GEngine)
					GEngine->AddOnScreenDebugMessage(-1, 1.0, FColor::Red, "Trying to swing");
				FindSwingPoint();
				tryingToSwing = true;
			}
			/*if (GEngine)
				GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Web Pressed"));*/
		}
	}
	else
	{
		if (swinging)
		{
			swinging = false;
		}
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
	/*for (int i = 0; i < scannedNum; i++)
	{
		if (FGenericPlatformMath::Abs(GetActorLocation().X - PotentialWebPoints[i]->GetActorLocation().X) > 300)
		{
			PotentialWebPoints.Remove(PotentialWebPoints[i]);
			scannedNum--;
		}
	}*/
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
	swingAngle = 0;
	swingSpeed = 30.0f;
	radiusOfSwing = FMath::Sqrt(FMath::Square(GetActorLocation().X - swingPoint.X) + FMath::Square(GetActorLocation().Y - swingPoint.Y) + FMath::Square(GetActorLocation().Z - swingPoint.Z));
	upVector.X = swingPoint.X;
	upVector.Y = swingPoint.Y;
	upVector.Z = swingPoint.Z + radiusOfSwing;
	FVector NormalPos = GetActorLocation();
	FVector NormalUpVec = upVector;
	NormalPos.Normalize();
	NormalUpVec.Normalize();
	swingAngle = FMath::Acos(FVector::DotProduct(upVector, GetActorLocation()));
	GEngine->AddOnScreenDebugMessage(-1, 1.0, FColor::Red, FString::Printf(TEXT("AngleOfSwing %f"), swingAngle));
}

void APlayer_Base::Swing()
{
	if (swinging)
	{
		CharacterMovement->GravityScale = 0;
		FVector swungPos;
		swingAngle += swingSpeed;
		//https://stackoverflow.com/questions/14829621/formula-to-find-points-on-the-circumference-of-a-circle-given-the-center-of-the
		swungPos.Z = radiusOfSwing * FMath::Cos(swingAngle) + swingPoint.X;
		swungPos.X = radiusOfSwing * FMath::Sin(swingAngle) + swingPoint.Z;
		//GEngine->AddOnScreenDebugMessage(-1, 1.0, FColor::Red, FString::Printf(TEXT("SwungPos %f %f %f"), swungPos.X, swungPos.Y, swungPos.Z));
		swungPos = GetActorLocation() - swungPos;
		swungPos.Normalize();
		SetActorLocation(GetActorLocation() + (swungPos * swingSpeed * delta));
	}
	else
	{
		CharacterMovement->GravityScale = 1;
	}
}

void APlayer_Base::CalculateSwingSpeed(FVector newLocation, FVector currentLocation)
{
	if (currentLocation.Z > newLocation.Z)
	{
		swingSpeed += 10;
	}
	else if (currentLocation.Z < newLocation.Z)
	{
		swingSpeed -= 5;
	}
	else
	{
		swingSpeed += 5;
	}
}



