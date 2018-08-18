// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Group1_Assignment1aEditorTarget : TargetRules
{
	public Group1_Assignment1aEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "Group1_Assignment1a" } );
	}
}
