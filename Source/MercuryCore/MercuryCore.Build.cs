using UnrealBuildTool;

public class MercuryCore: ModuleRules
{
    public MercuryCore(ReadOnlyTargetRules Target) : base(Target)
    {

        PrivateDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "GameplayTags" });

    }
}