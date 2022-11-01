// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyStringToBytes.generated.h"

/**
 * 
 */
UCLASS()
class LIPSYNCMETAHUMAN_API UMyStringToBytes : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "MyStringToBytes")
	static TArray<uint8> StringToByteArray(FString original);
};
