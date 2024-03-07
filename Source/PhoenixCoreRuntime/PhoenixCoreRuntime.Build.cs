using UnrealBuildTool;

public class PhoenixCoreRuntime: ModuleRules
{
    public PhoenixCoreRuntime(ReadOnlyTargetRules Target) : base(Target)
    {

        PrivateDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine" });

    }
}