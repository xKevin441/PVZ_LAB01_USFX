// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PVZ_LAB01_USFX : ModuleRules
{
	public PVZ_LAB01_USFX(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
