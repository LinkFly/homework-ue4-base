// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Task1_Base : ModuleRules
{
	public Task1_Base(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
