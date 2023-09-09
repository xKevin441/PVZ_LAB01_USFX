// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class PVZ_LAB01_USFXTarget : TargetRules
{
	public PVZ_LAB01_USFXTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("PVZ_LAB01_USFX");
	}
}
