// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#include "EngineGlobals.h"
#include "Engine.h"
#include "DrawDebugHelpers.h"
#include "Engine/DamageEvents.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"

#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/ProgressBar.h"
#include "Components/Image.h"
#include "Components/ListView.h"
#include "Components/TreeView.h"
#include "Components/TileView.h"
#include "Blueprint/WidgetBlueprintGeneratedClass.h"
#include "Animation/WidgetAnimation.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"

#include "MediaPlayer.h"
#include "MediaTexture.h"
#include "MediaSoundComponent.h"
#include "MediaSource.h"

#include "LevelSequence.h"
#include "LevelSequencePlayer.h"


#include "CameraRig_Rail.h"

#include "Networking.h"
#include "Sockets.h"
#include "SocketSubsystem.h"
#include "Net/UnrealNetwork.h"


#include "UObject/NoExportTypes.h"
#include "GameInfo.generated.h"


DECLARE_LOG_CATEGORY_EXTERN(SAC1, Log, All);

#define   LOG_CALLINFO   (FString(__FUNCTION__) + TEXT("[") + FString::FromInt(__LINE__) + TEXT("]"))

#define   LOG(Format, ...)   UE_LOG(SAC1, Warning, TEXT("%s : %s"), *LOG_CALLINFO, *FString::Printf(Format, ##__VA_ARGS__));

#define   LOGSTRING(str)      UE_LOG(SAC1, Warning, TEXT("%S : %S"), *LOG_CALLINFO, *str);


USTRUCT()
struct FJoinInfo
{
	GENERATED_USTRUCT_BODY()

public:
	FString		ID;
	FString		Password;
	FString		Age;
	FString		PhoneNumber;
	bool		Login;
};

UCLASS()
class SAC1NETWORK_API UGameInfo : public UObject
{
	GENERATED_BODY()
	
};
