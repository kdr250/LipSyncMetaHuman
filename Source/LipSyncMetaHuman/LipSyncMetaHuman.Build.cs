// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class LipSyncMetaHuman : ModuleRules
{
	public LipSyncMetaHuman(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HTTP" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });

		string TextToSpeechUrl = System.Environment.GetEnvironmentVariable("TEXT_TO_SPEECH_URL");
		Definitions.Add(string.Format("TEXT_TO_SPEECH_URL=\"{0}\"", TextToSpeechUrl));

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
