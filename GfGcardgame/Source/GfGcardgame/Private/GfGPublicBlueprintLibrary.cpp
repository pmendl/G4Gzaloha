// Fill out your copyright notice in the Description page of Project Settings.


#include "GfGPublicBlueprintLibrary.h"
#include "Runtime/Engine/Classes/Engine/World.h"

AActor* UGFGPUBLICBLUEPRINTLIBRARY::CloneActor(AActor* InputActor) // Note: put a U before the name of your library
{
    UWorld* World = InputActor->GetWorld();
    UE_LOG(LogTemp, Log, TEXT("Actor Duplication"));
    FActorSpawnParameters params;
    params.Template = InputActor;

    UClass* ItemClass = InputActor->GetClass();
    AActor* const SpawnedActor = World->SpawnActor<AActor>(ItemClass, params);
    return SpawnedActor;
}