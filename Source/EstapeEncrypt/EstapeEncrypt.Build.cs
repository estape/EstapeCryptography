using UnrealBuildTool;
using System.IO;

public class EstapeEncrypt : ModuleRules
{
    public EstapeEncrypt(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        // Dependências públicas e privadas
        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core"
                // ... adicione outras dependências públicas aqui ...
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                // ... adicione outras dependências privadas aqui ...
            }
        );

        // Caminho para o OpenSSL
        string OpenSSLPath = Path.Combine(ModuleDirectory, "..", "ThirdParty", "openssl");

        // Incluindo cabeçalhos do OpenSSL
        PublicIncludePaths.Add(Path.Combine(OpenSSLPath, "include"));

        // Incluindo bibliotecas do OpenSSL
        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            PublicAdditionalLibraries.Add(Path.Combine(OpenSSLPath, "libcrypto.lib"));
            PublicAdditionalLibraries.Add(Path.Combine(OpenSSLPath, "libssl.lib"));
        }

        // Dependências em Tempo de Execução (DLLs)
        RuntimeDependencies.Add("$(BinaryOutputDir)/libcrypto-3-x64.dll", Path.Combine(OpenSSLPath, "libcrypto-3-x64.dll"));
        RuntimeDependencies.Add("$(BinaryOutputDir)/libssl-3-x64.dll", Path.Combine(OpenSSLPath, "libssl-3-x64.dll"));

        // Adicionando uma definição de pré-processador
        PublicDefinitions.Add("UI_SKIP_REDEFINITION");
    }
}