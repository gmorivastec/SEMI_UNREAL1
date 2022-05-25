// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SEMESTREI_1 : ModuleRules
{
	public SEMESTREI_1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
