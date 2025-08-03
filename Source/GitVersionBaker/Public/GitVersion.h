// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GitVersion.generated.h"

/**
 *
 */
UCLASS()
class GITVERSIONBAKER_API UGitVersion : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/** Gets the Git commit hash for this build. */
	UFUNCTION(BlueprintPure, Category = "Game Version")
	static FString GetLongGitHash();

	/** Gets the short Git hash, useful for displaying in the UI. */
	UFUNCTION(BlueprintPure, Category = "Game Version")
	static FString GetShortGitHash();

	/** Gets only the timestamp of when the build was made. */
	UFUNCTION(BlueprintPure, Category = "Game Version")
	static FDateTime GetBuildTimestamp();
};
