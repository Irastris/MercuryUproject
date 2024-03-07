using UnrealBuildTool;

public class MercuryOnline: ModuleRules
{
    public MercuryOnline(ReadOnlyTargetRules Target) : base(Target)
    {

        PrivateDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "GameplayTags" });

    }
}