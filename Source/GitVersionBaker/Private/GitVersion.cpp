// Fill out your copyright notice in the Description page of Project Settings.


#include "GitVersion.h"

#include "BakedGitVersion.h"

FString UGitVersion::GetLongGitHash()
{
	return GAME_VERSION_HASH;
}

FString UGitVersion::GetShortGitHash()
{
	return FString(GAME_VERSION_HASH).Left(6);
}

FDateTime UGitVersion::GetBuildTimestamp()
{
	FDateTime Timestamp;
	FDateTime::ParseIso8601(TEXT(GAME_BUILD_TIMESTAMP), Timestamp);
	return Timestamp;
}
