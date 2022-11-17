// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyGetEnvironmentValue.generated.h"

/**
 * 
 */
UCLASS()
class LIPSYNCMETAHUMAN_API UMyGetEnvironmentValue : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "MyGetEnvironmentValue")
	static FString GetTextToSpeechUrl();
};
