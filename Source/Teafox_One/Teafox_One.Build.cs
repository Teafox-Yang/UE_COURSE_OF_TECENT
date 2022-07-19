// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Teafox_One : ModuleRules
{
	public Teafox_One(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
