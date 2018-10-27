// Code designed and written by John Whiles

#include "Ring.h"
#include "Player_Base.h"

// Sets default values
ARing::ARing()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ARing::BeginPlay()
{
	Super::BeginPlay();
	used = false;
}

// Called every frame
void ARing::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ARing::IncreaseScore(APlayer_Base* player, float increase)
{
	if (!used)
	{
		player->IncreaseScore(increase);
		used = true;
	}
}

