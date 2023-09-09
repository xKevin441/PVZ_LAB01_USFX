// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class PVZ_LAB01_USFXEditorTarget : TargetRules
{
	public PVZ_LAB01_USFXEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("PVZ_LAB01_USFX");
	}
}
