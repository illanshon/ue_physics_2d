#include "MyActorCPP.h"

#include "Precompiled.h"
#include <MyProjectCPP/BodyActor.h>




// Sets default values
AMyActorCPP::AMyActorCPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	

}

// Called when the game starts or when spawned
void AMyActorCPP::BeginPlay()
{
	Super::BeginPlay();
	
	
	
}

// Called every frame
void AMyActorCPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
Scene scene(1.0f / 60.0f, 10);
Clock g_Clock;
bool frameStepping = false;
bool canStep = false;


void AMyActorCPP::Prinnnn()
{
	UE_LOG(LogTemp, Log, TEXT("Eurica"));



}




	void PhysicsLoop(void)
	{

		
		static double accumulator = 0;

		// Different time mechanisms for Linux and Windows
#ifdef WIN32
		accumulator += g_Clock.Elapsed();
#else
		accumulator += g_Clock.Elapsed() / static_cast<double>(std::chrono::duration_cast<clock_freq>(std::chrono::seconds(1)).count());
#endif
		
		g_Clock.Start();
		int aaa = 10;
		accumulator = Clamp(0.0f, 0.1f, accumulator);
		while (accumulator >= dtGlobal)
		{
			if (!frameStepping)
			{
				scene.Step();
				UE_LOG(LogTemp, Log, TEXT("Eurica, %d"), accumulator);
			}
			else
			{
				if (canStep)
				{
					scene.Step();
					canStep = false;
				}
			}
			accumulator -= dtGlobal;
		}

		g_Clock.Stop();

		


	}


	
	void AMyActorCPP::Debg()
	{
		UE_LOG(LogTemp, Log, TEXT("!Looop"));
		PhysicsLoop();
	}

	
	void AMyActorCPP::SpawnPoligon(int x, int y)
	{
		
		//GetWorld()->SpawnActor<ABodyActor>(ABodyActor, 1,5,5,);


		PolygonShape poly;
		uint32 count = (uint32)Random(3, MaxPolyVertexCount);
		Vec2* vertices = new Vec2[count];
		real e = Random(5, 10);
		for (uint32 i = 0; i < count; ++i)
			vertices[i].Set(Random(-e, e), Random(-e, e));
		poly.Set(vertices, count);
		Body* b = scene.Add(&poly, x, y);
		b->SetOrient(Random(-PI, PI));
		b->restitution = 0.2f;
		b->dynamicFriction = 0.2f;
		b->staticFriction = 0.4f;
		delete[] vertices;
	}

	void AMyActorCPP::SpawnActual()
	{
	}
