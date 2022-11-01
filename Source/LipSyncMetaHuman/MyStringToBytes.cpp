// Fill out your copyright notice in the Description page of Project Settings.


#include "MyStringToBytes.h"

TArray<uint8> UMyStringToBytes::StringToByteArray(FString original)
{
	uint32 size = original.Len();
	TArray<uint8> data;
	data.AddUninitialized(size);
	StringToBytes(original, data.GetData(), size);

	return data;
}
