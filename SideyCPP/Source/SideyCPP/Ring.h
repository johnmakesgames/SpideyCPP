// Code designed and written by John Whiles

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ring.generated.h"

class APlayer_Base;

UCLASS()
class SIDEYCPP_API ARing : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	ARing();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stuff")
		float scoreIncreaseAmount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ring Stuff")
		bool used;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable, Category="Player Stuff")
	 void IncreaseScore(APlayer_Base* player, float increase);
	UFUNCTION(BlueprintCallable, Category = "Ring Stuff")
	virtual float GetScoreIncrease() { return scoreIncreaseAmount; };
};
