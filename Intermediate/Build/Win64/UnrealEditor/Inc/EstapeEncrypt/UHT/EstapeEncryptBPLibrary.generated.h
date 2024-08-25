// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EstapeEncryptBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class RSAKeySize : uint8;
#ifdef ESTAPEENCRYPT_EstapeEncryptBPLibrary_generated_h
#error "EstapeEncryptBPLibrary.generated.h already included, missing '#pragma once' in EstapeEncryptBPLibrary.h"
#endif
#define ESTAPEENCRYPT_EstapeEncryptBPLibrary_generated_h

#define FID_EstapeToolsProject_Plugins_EstapeEncrypt_Source_EstapeEncrypt_Public_EstapeEncryptBPLibrary_h_20_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGenerateRSA_PrivateKey); \
	DECLARE_FUNCTION(execGenerateMD5Hash); \
	DECLARE_FUNCTION(execDecryptAES); \
	DECLARE_FUNCTION(execEncryptAES);


#define FID_EstapeToolsProject_Plugins_EstapeEncrypt_Source_EstapeEncrypt_Public_EstapeEncryptBPLibrary_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUEstapeEncryptBPLibrary(); \
	friend struct Z_Construct_UClass_UEstapeEncryptBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UEstapeEncryptBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EstapeEncrypt"), NO_API) \
	DECLARE_SERIALIZER(UEstapeEncryptBPLibrary)


#define FID_EstapeToolsProject_Plugins_EstapeEncrypt_Source_EstapeEncrypt_Public_EstapeEncryptBPLibrary_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEstapeEncryptBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEstapeEncryptBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEstapeEncryptBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEstapeEncryptBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEstapeEncryptBPLibrary(UEstapeEncryptBPLibrary&&); \
	UEstapeEncryptBPLibrary(const UEstapeEncryptBPLibrary&); \
public: \
	NO_API virtual ~UEstapeEncryptBPLibrary();


#define FID_EstapeToolsProject_Plugins_EstapeEncrypt_Source_EstapeEncrypt_Public_EstapeEncryptBPLibrary_h_17_PROLOG
#define FID_EstapeToolsProject_Plugins_EstapeEncrypt_Source_EstapeEncrypt_Public_EstapeEncryptBPLibrary_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EstapeToolsProject_Plugins_EstapeEncrypt_Source_EstapeEncrypt_Public_EstapeEncryptBPLibrary_h_20_RPC_WRAPPERS \
	FID_EstapeToolsProject_Plugins_EstapeEncrypt_Source_EstapeEncrypt_Public_EstapeEncryptBPLibrary_h_20_INCLASS \
	FID_EstapeToolsProject_Plugins_EstapeEncrypt_Source_EstapeEncrypt_Public_EstapeEncryptBPLibrary_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ESTAPEENCRYPT_API UClass* StaticClass<class UEstapeEncryptBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EstapeToolsProject_Plugins_EstapeEncrypt_Source_EstapeEncrypt_Public_EstapeEncryptBPLibrary_h


#define FOREACH_ENUM_RSAKEYSIZE(op) \
	op(RSAKeySize::RSA_1024) \
	op(RSAKeySize::RSA_2048) \
	op(RSAKeySize::RSA_3072) \
	op(RSAKeySize::RSA_4096) 

enum class RSAKeySize : uint8;
template<> struct TIsUEnumClass<RSAKeySize> { enum { Value = true }; };
template<> ESTAPEENCRYPT_API UEnum* StaticEnum<RSAKeySize>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
