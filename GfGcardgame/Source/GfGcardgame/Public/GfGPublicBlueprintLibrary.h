// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GfGPublicBlueprintLibrary.generated.h"

/**
 * 
 */
UCLASS()
class GFGCARDGAME_API UGFGPUBLICBLUEPRINTLIBRARY : public UBlueprintFunctionLibrary // Note: replace the project name and put a U before the name of your library
{
    GENERATED_BODY()

        UFUNCTION(BlueprintCallable, Category = "ActorFuncions", meta = (DeterminesOutputType = "InputActor"))
        static AActor* CloneActor(AActor* InputActor);

};
