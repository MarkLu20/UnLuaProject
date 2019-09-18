// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "UnrealEngine.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MyCom = CreateDefaultSubobject<UMyActorComponent>(TEXT("MyComInstance"));

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyActor::NetMulitcastFunction_Implementation()
{
	MyCom->Test();
	//GEngine->AddOnScreenDebugMessage(-1,100.0f,FColor::);
}

bool AMyActor::NetMulitcastFunction_Validate()
{
	return true;
}

