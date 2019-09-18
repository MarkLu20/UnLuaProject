// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorComponent.h"
#include "UnrealEngine.h"
//#include "UnLua.h"

// Sets default values for this component's properties
UMyActorComponent::UMyActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMyActorComponent::BeginPlay()
{
	Super::BeginPlay();
	//Mode = ENetMode::NM_MAX;
	//CallTableFunc();
	// ...
	//lua_State* L;
	//Call<UMyActorComponent>(L,"Test",1.0);
}


// Called every frame
void UMyActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


FString UMyActorComponent::GetModuleName_Implementation() const
{
	return TEXT("MyActorComponentLua");

}

void UMyActorComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	GEngine->AddOnScreenDebugMessage(-1,100.0f,FColor::Cyan,"MyCom Destory");
}

