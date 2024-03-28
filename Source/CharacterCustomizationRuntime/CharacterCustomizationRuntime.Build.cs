using UnrealBuildTool;

public class CharacterCustomizationRuntime: ModuleRules
{
    public CharacterCustomizationRuntime(ReadOnlyTargetRules Target) : base(Target)
    {

        PrivateDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "GameplayTags" });

    }
}