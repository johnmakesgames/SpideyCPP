// Code designed and written by John Whiles

#include "RotatingSphere.h"


// Sets default values
ARotatingSphere::ARotatingSphere()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARotatingSphere::BeginPlay()
{
	Super::BeginPlay();
	rotationPoint = FVector(0,0,0);
	myPos -= rotationPoint;
	radius = FMath::Sqrt(FMath::Square(GetActorLocation().X - rotationPoint.X) + FMath::Square(GetActorLocation().Y - rotationPoint.Y) + FMath::Square(GetActorLocation().Z - rotationPoint.Z));
	myPos /= radius;
	angle = FMath::Acos((myPos.X * 0) + (myPos.Y * 0) + (myPos.Z * 1) / radius);
}

// Called every frame
void ARotatingSphere::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	myPos = GetActorLocation();
	Rotation(DeltaTime);
}

void ARotatingSphere::Rotation(float deltaTime)
{
	angle += 1 * deltaTime;
	newPos.Z = FMath::Cos(angle);
	newPos.X = (-1 * moveDirection.X) * FMath::Sin(angle);
	newPos.Y = (-1 * moveDirection.Y) * FMath::Sin(angle);
	newPos *= radius;
	newPos += rotationPoint;
	SetActorLocation(newPos);
}

