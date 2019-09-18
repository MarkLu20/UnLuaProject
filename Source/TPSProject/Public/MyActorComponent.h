// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UnLuaInterface.h"
#include "MyActorComponent.generated.h"
UENUM(BlueprintType)
enum class EMyNetMode :uint8
{
	/** Standalone: a game without networking, with one or more local players. Still considered a server because it has all server functionality. */
	NM_Standalone,

	/** Dedicated server: server with no local players. */
	NM_DedicatedServer,

	/** Listen server: a server that also has a local player who is hosting the game, available to other players on the network. */
	NM_ListenServer,

	/**
	 * Network client: client connected to a remote server.
	 * Note that every mode less than this value is a kind of server, so checking NetMode < NM_Client is always some variety of server.
	 */
	NM_Client,

	NM_MAX,
};
UCLASS( BlueprintType,Blueprintable,ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TPSPROJECT_API UMyActorComponent : public UActorComponent, public IUnLuaInterface
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMyActorComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UFUNCTION(BlueprintImplementableEvent)
		void Test();
	
		
public:
	virtual FString GetModuleName_Implementation() const override;


	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	UPROPERTY(BlueprintReadOnly)
		EMyNetMode MyMode;
	UPROPERTY(EditDefaultsOnly)
		uint8 bhahah : 1;

};
