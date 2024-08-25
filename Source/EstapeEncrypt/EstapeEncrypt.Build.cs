using UnrealBuildTool;
using System.IO;

public class EstapeEncrypt : ModuleRules
{
    public EstapeEncrypt(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        // Depend�ncias p�blicas e privadas
        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core"
                // ... adicione outras depend�ncias p�blicas aqui ...
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                // ... adicione outras depend�ncias privadas aqui ...
            }
        );

        // Caminho para o OpenSSL
        string OpenSSLPath = Path.Combine(ModuleDirectory, "..", "ThirdParty", "openssl");

        // Incluindo cabe�alhos do OpenSSL
        PublicIncludePaths.Add(Path.Combine(OpenSSLPath, "include"));

        // Incluindo bibliotecas do OpenSSL
        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            PublicAdditionalLibraries.Add(Path.Combine(OpenSSLPath, "libcrypto.lib"));
            PublicAdditionalLibraries.Add(Path.Combine(OpenSSLPath, "libssl.lib"));
        }

        // Depend�ncias em Tempo de Execu��o (DLLs)
        RuntimeDependencies.Add("$(BinaryOutputDir)/libcrypto-3-x64.dll", Path.Combine(OpenSSLPath, "libcrypto-3-x64.dll"));
        RuntimeDependencies.Add("$(BinaryOutputDir)/libssl-3-x64.dll", Path.Combine(OpenSSLPath, "libssl-3-x64.dll"));

        // Adicionando uma defini��o de pr�-processador
        PublicDefinitions.Add("UI_SKIP_REDEFINITION");
    }
}