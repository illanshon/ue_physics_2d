#include "BodyActor.h"

// Sets default values
ABodyActor::ABodyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABodyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABodyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

