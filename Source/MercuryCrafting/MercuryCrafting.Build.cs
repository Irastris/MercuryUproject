using UnrealBuildTool;

public class MercuryCrafting: ModuleRules
{
    public MercuryCrafting(ReadOnlyTargetRules Target) : base(Target)
    {

        PrivateDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "GameplayTags", "CharacterCustomizationRuntime" });

    }
}