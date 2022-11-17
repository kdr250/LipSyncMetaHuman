// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyUrlEncode.generated.h"

/**
 * 
 */
UCLASS()
class LIPSYNCMETAHUMAN_API UMyUrlEncode : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, Category = "MyUrlEncode")
	static FString UrlEncoding(FString original);
};
