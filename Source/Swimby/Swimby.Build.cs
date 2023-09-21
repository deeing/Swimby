// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Swimby : ModuleRules
{
	public Swimby(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
