// Fill out your copyright notice in the Description page of Project Settings.


#include "MyUrlEncode.h"
#include "GenericPlatform/GenericPlatformHttp.h"

FString UMyUrlEncode::UrlEncoding(FString original) {
	return FGenericPlatformHttp::UrlEncode(original);
}
