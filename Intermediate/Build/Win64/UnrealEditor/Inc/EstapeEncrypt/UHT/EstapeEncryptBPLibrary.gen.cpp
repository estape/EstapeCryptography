// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EstapeEncrypt/Public/EstapeEncryptBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstapeEncryptBPLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ESTAPEENCRYPT_API UClass* Z_Construct_UClass_UEstapeEncryptBPLibrary();
ESTAPEENCRYPT_API UClass* Z_Construct_UClass_UEstapeEncryptBPLibrary_NoRegister();
ESTAPEENCRYPT_API UEnum* Z_Construct_UEnum_EstapeEncrypt_RSAKeySize();
UPackage* Z_Construct_UPackage__Script_EstapeEncrypt();
// End Cross Module References

// Begin Enum RSAKeySize
static FEnumRegistrationInfo Z_Registration_Info_UEnum_RSAKeySize;
static UEnum* RSAKeySize_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_RSAKeySize.OuterSingleton)
	{
		Z_Registration_Info_UEnum_RSAKeySize.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EstapeEncrypt_RSAKeySize, (UObject*)Z_Construct_UPackage__Script_EstapeEncrypt(), TEXT("RSAKeySize"));
	}
	return Z_Registration_Info_UEnum_RSAKeySize.OuterSingleton;
}
template<> ESTAPEENCRYPT_API UEnum* StaticEnum<RSAKeySize>()
{
	return RSAKeySize_StaticEnum();
}
struct Z_Construct_UEnum_EstapeEncrypt_RSAKeySize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EstapeEncryptBPLibrary.h" },
		{ "RSA_1024.DisplayName", "1024" },
		{ "RSA_1024.Name", "RSAKeySize::RSA_1024" },
		{ "RSA_2048.DisplayName", "2048" },
		{ "RSA_2048.Name", "RSAKeySize::RSA_2048" },
		{ "RSA_3072.DisplayName", "3072" },
		{ "RSA_3072.Name", "RSAKeySize::RSA_3072" },
		{ "RSA_4096.DisplayName", "4096" },
		{ "RSA_4096.Name", "RSAKeySize::RSA_4096" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "RSAKeySize::RSA_1024", (int64)RSAKeySize::RSA_1024 },
		{ "RSAKeySize::RSA_2048", (int64)RSAKeySize::RSA_2048 },
		{ "RSAKeySize::RSA_3072", (int64)RSAKeySize::RSA_3072 },
		{ "RSAKeySize::RSA_4096", (int64)RSAKeySize::RSA_4096 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EstapeEncrypt_RSAKeySize_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EstapeEncrypt,
	nullptr,
	"RSAKeySize",
	"RSAKeySize",
	Z_Construct_UEnum_EstapeEncrypt_RSAKeySize_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EstapeEncrypt_RSAKeySize_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EstapeEncrypt_RSAKeySize_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EstapeEncrypt_RSAKeySize_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EstapeEncrypt_RSAKeySize()
{
	if (!Z_Registration_Info_UEnum_RSAKeySize.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_RSAKeySize.InnerSingleton, Z_Construct_UEnum_EstapeEncrypt_RSAKeySize_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_RSAKeySize.InnerSingleton;
}
// End Enum RSAKeySize

// Begin Class UEstapeEncryptBPLibrary Function DecryptAES
struct Z_Construct_UFunction_UEstapeEncryptBPLibrary_DecryptAES_Statics
{
	struct EstapeEncryptBPLibrary_eventDecryptAES_Parms
	{
		TArray<uint8> EncryptedData;
		FString Key;
		TArray<uint8> DecryptedData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeEncrypt|Decryptation|AES" },
		{ "Keywords", "Encrypt Bytes AES" },
		{ "ModuleRelativePath", "Public/EstapeEncryptBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EncryptedData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EncryptedData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DecryptedData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DecryptedData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEstapeEncryptBPLibrary_DecryptAES_Statics::NewProp_EncryptedData_Inner = { "EncryptedData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeEncryptBPLibrary_DecryptAES_Statics::NewProp_EncryptedData = { "EncryptedData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeEncryptBPLibrary_eventDecryptAES_Parms, EncryptedData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEstapeEncryptBPLibrary_DecryptAES_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeEncryptBPLibrary_eventDecryptAES_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEstapeEncryptBPLibrary_DecryptAES_Statics::NewProp_DecryptedData_Inner = { "DecryptedData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeEncryptBPLibrary_DecryptAES_Statics::NewProp_DecryptedData = { "DecryptedData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeEncryptBPLibrary_eventDecryptAES_Parms, DecryptedData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEstapeEncryptBPLibrary_DecryptAES_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EstapeEncryptBPLibrary_eventDecryptAES_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEstapeEncryptBPLibrary_DecryptAES_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EstapeEncryptBPLibrary_eventDecryptAES_Parms), &Z_Construct_UFunction_UEstapeEncryptBPLibrary_DecryptAES_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeEncryptBPLibrary_DecryptAES_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeEncryptBPLibrary_DecryptAES_Statics::NewProp_EncryptedData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeEncryptBPLibrary_DecryptAES_Statics::NewProp_EncryptedData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeEncryptBPLibrary_DecryptAES_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeEncryptBPLibrary_DecryptAES_Statics::NewProp_DecryptedData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeEncryptBPLibrary_DecryptAES_Statics::NewProp_DecryptedData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeEncryptBPLibrary_DecryptAES_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeEncryptBPLibrary_DecryptAES_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeEncryptBPLibrary_DecryptAES_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeEncryptBPLibrary, nullptr, "DecryptAES", nullptr, nullptr, Z_Construct_UFunction_UEstapeEncryptBPLibrary_DecryptAES_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeEncryptBPLibrary_DecryptAES_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEstapeEncryptBPLibrary_DecryptAES_Statics::EstapeEncryptBPLibrary_eventDecryptAES_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeEncryptBPLibrary_DecryptAES_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEstapeEncryptBPLibrary_DecryptAES_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEstapeEncryptBPLibrary_DecryptAES_Statics::EstapeEncryptBPLibrary_eventDecryptAES_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEstapeEncryptBPLibrary_DecryptAES()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEstapeEncryptBPLibrary_DecryptAES_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEstapeEncryptBPLibrary::execDecryptAES)
{
	P_GET_TARRAY(uint8,Z_Param_EncryptedData);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_DecryptedData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEstapeEncryptBPLibrary::DecryptAES(Z_Param_EncryptedData,Z_Param_Key,Z_Param_Out_DecryptedData);
	P_NATIVE_END;
}
// End Class UEstapeEncryptBPLibrary Function DecryptAES

// Begin Class UEstapeEncryptBPLibrary Function EncryptAES
struct Z_Construct_UFunction_UEstapeEncryptBPLibrary_EncryptAES_Statics
{
	struct EstapeEncryptBPLibrary_eventEncryptAES_Parms
	{
		TArray<uint8> Data;
		FString Key;
		TArray<uint8> EncryptedData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeEncrypt|Encryptation|AES" },
		{ "Keywords", "Encrypt Bytes AES" },
		{ "ModuleRelativePath", "Public/EstapeEncryptBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EncryptedData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EncryptedData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEstapeEncryptBPLibrary_EncryptAES_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeEncryptBPLibrary_EncryptAES_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeEncryptBPLibrary_eventEncryptAES_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEstapeEncryptBPLibrary_EncryptAES_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeEncryptBPLibrary_eventEncryptAES_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEstapeEncryptBPLibrary_EncryptAES_Statics::NewProp_EncryptedData_Inner = { "EncryptedData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeEncryptBPLibrary_EncryptAES_Statics::NewProp_EncryptedData = { "EncryptedData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeEncryptBPLibrary_eventEncryptAES_Parms, EncryptedData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEstapeEncryptBPLibrary_EncryptAES_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EstapeEncryptBPLibrary_eventEncryptAES_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEstapeEncryptBPLibrary_EncryptAES_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EstapeEncryptBPLibrary_eventEncryptAES_Parms), &Z_Construct_UFunction_UEstapeEncryptBPLibrary_EncryptAES_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeEncryptBPLibrary_EncryptAES_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeEncryptBPLibrary_EncryptAES_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeEncryptBPLibrary_EncryptAES_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeEncryptBPLibrary_EncryptAES_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeEncryptBPLibrary_EncryptAES_Statics::NewProp_EncryptedData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeEncryptBPLibrary_EncryptAES_Statics::NewProp_EncryptedData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeEncryptBPLibrary_EncryptAES_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeEncryptBPLibrary_EncryptAES_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeEncryptBPLibrary_EncryptAES_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeEncryptBPLibrary, nullptr, "EncryptAES", nullptr, nullptr, Z_Construct_UFunction_UEstapeEncryptBPLibrary_EncryptAES_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeEncryptBPLibrary_EncryptAES_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEstapeEncryptBPLibrary_EncryptAES_Statics::EstapeEncryptBPLibrary_eventEncryptAES_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeEncryptBPLibrary_EncryptAES_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEstapeEncryptBPLibrary_EncryptAES_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEstapeEncryptBPLibrary_EncryptAES_Statics::EstapeEncryptBPLibrary_eventEncryptAES_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEstapeEncryptBPLibrary_EncryptAES()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEstapeEncryptBPLibrary_EncryptAES_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEstapeEncryptBPLibrary::execEncryptAES)
{
	P_GET_TARRAY(uint8,Z_Param_Data);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_EncryptedData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEstapeEncryptBPLibrary::EncryptAES(Z_Param_Data,Z_Param_Key,Z_Param_Out_EncryptedData);
	P_NATIVE_END;
}
// End Class UEstapeEncryptBPLibrary Function EncryptAES

// Begin Class UEstapeEncryptBPLibrary Function GenerateMD5Hash
struct Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateMD5Hash_Statics
{
	struct EstapeEncryptBPLibrary_eventGenerateMD5Hash_Parms
	{
		FString ReturnHash;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeEncrypt|Generator|Hash" },
		{ "KeyWords", "Generete hash" },
		{ "ModuleRelativePath", "Public/EstapeEncryptBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnHash;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateMD5Hash_Statics::NewProp_ReturnHash = { "ReturnHash", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeEncryptBPLibrary_eventGenerateMD5Hash_Parms, ReturnHash), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateMD5Hash_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EstapeEncryptBPLibrary_eventGenerateMD5Hash_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateMD5Hash_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EstapeEncryptBPLibrary_eventGenerateMD5Hash_Parms), &Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateMD5Hash_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateMD5Hash_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateMD5Hash_Statics::NewProp_ReturnHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateMD5Hash_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateMD5Hash_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateMD5Hash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeEncryptBPLibrary, nullptr, "GenerateMD5Hash", nullptr, nullptr, Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateMD5Hash_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateMD5Hash_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateMD5Hash_Statics::EstapeEncryptBPLibrary_eventGenerateMD5Hash_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateMD5Hash_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateMD5Hash_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateMD5Hash_Statics::EstapeEncryptBPLibrary_eventGenerateMD5Hash_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateMD5Hash()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateMD5Hash_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEstapeEncryptBPLibrary::execGenerateMD5Hash)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ReturnHash);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEstapeEncryptBPLibrary::GenerateMD5Hash(Z_Param_Out_ReturnHash);
	P_NATIVE_END;
}
// End Class UEstapeEncryptBPLibrary Function GenerateMD5Hash

// Begin Class UEstapeEncryptBPLibrary Function GenerateRSA_PrivateKey
struct Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateRSA_PrivateKey_Statics
{
	struct EstapeEncryptBPLibrary_eventGenerateRSA_PrivateKey_Parms
	{
		RSAKeySize KeySize;
		FString PrivateKey;
		FString PublicKey;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeEncrypt|Generator|RSA" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION(BlueprintCallable, meta = (Keywords = \"Decrypt Bytes RSA\"), Category = \"EstapeEncrypt|Decryptation|RSA\")\n//static bool DecryptRSA(TArray<uint8> EncryptedData, FString PrivateKey, TArray<uint8>& DecryptedData);\n" },
#endif
		{ "Keywords", "Generate RSA Keys" },
		{ "ModuleRelativePath", "Public/EstapeEncryptBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(BlueprintCallable, meta = (Keywords = \"Decrypt Bytes RSA\"), Category = \"EstapeEncrypt|Decryptation|RSA\")\nstatic bool DecryptRSA(TArray<uint8> EncryptedData, FString PrivateKey, TArray<uint8>& DecryptedData);" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_KeySize_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_KeySize;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PrivateKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PublicKey;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateRSA_PrivateKey_Statics::NewProp_KeySize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateRSA_PrivateKey_Statics::NewProp_KeySize = { "KeySize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeEncryptBPLibrary_eventGenerateRSA_PrivateKey_Parms, KeySize), Z_Construct_UEnum_EstapeEncrypt_RSAKeySize, METADATA_PARAMS(0, nullptr) }; // 2691595816
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateRSA_PrivateKey_Statics::NewProp_PrivateKey = { "PrivateKey", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeEncryptBPLibrary_eventGenerateRSA_PrivateKey_Parms, PrivateKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateRSA_PrivateKey_Statics::NewProp_PublicKey = { "PublicKey", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeEncryptBPLibrary_eventGenerateRSA_PrivateKey_Parms, PublicKey), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateRSA_PrivateKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EstapeEncryptBPLibrary_eventGenerateRSA_PrivateKey_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateRSA_PrivateKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EstapeEncryptBPLibrary_eventGenerateRSA_PrivateKey_Parms), &Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateRSA_PrivateKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateRSA_PrivateKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateRSA_PrivateKey_Statics::NewProp_KeySize_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateRSA_PrivateKey_Statics::NewProp_KeySize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateRSA_PrivateKey_Statics::NewProp_PrivateKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateRSA_PrivateKey_Statics::NewProp_PublicKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateRSA_PrivateKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateRSA_PrivateKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateRSA_PrivateKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeEncryptBPLibrary, nullptr, "GenerateRSA_PrivateKey", nullptr, nullptr, Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateRSA_PrivateKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateRSA_PrivateKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateRSA_PrivateKey_Statics::EstapeEncryptBPLibrary_eventGenerateRSA_PrivateKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateRSA_PrivateKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateRSA_PrivateKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateRSA_PrivateKey_Statics::EstapeEncryptBPLibrary_eventGenerateRSA_PrivateKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateRSA_PrivateKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateRSA_PrivateKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEstapeEncryptBPLibrary::execGenerateRSA_PrivateKey)
{
	P_GET_ENUM(RSAKeySize,Z_Param_KeySize);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_PrivateKey);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_PublicKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEstapeEncryptBPLibrary::GenerateRSA_PrivateKey(RSAKeySize(Z_Param_KeySize),Z_Param_Out_PrivateKey,Z_Param_Out_PublicKey);
	P_NATIVE_END;
}
// End Class UEstapeEncryptBPLibrary Function GenerateRSA_PrivateKey

// Begin Class UEstapeEncryptBPLibrary
void UEstapeEncryptBPLibrary::StaticRegisterNativesUEstapeEncryptBPLibrary()
{
	UClass* Class = UEstapeEncryptBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DecryptAES", &UEstapeEncryptBPLibrary::execDecryptAES },
		{ "EncryptAES", &UEstapeEncryptBPLibrary::execEncryptAES },
		{ "GenerateMD5Hash", &UEstapeEncryptBPLibrary::execGenerateMD5Hash },
		{ "GenerateRSA_PrivateKey", &UEstapeEncryptBPLibrary::execGenerateRSA_PrivateKey },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEstapeEncryptBPLibrary);
UClass* Z_Construct_UClass_UEstapeEncryptBPLibrary_NoRegister()
{
	return UEstapeEncryptBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UEstapeEncryptBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EstapeEncryptBPLibrary.h" },
		{ "ModuleRelativePath", "Public/EstapeEncryptBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEstapeEncryptBPLibrary_DecryptAES, "DecryptAES" }, // 2879526921
		{ &Z_Construct_UFunction_UEstapeEncryptBPLibrary_EncryptAES, "EncryptAES" }, // 1949754211
		{ &Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateMD5Hash, "GenerateMD5Hash" }, // 577770587
		{ &Z_Construct_UFunction_UEstapeEncryptBPLibrary_GenerateRSA_PrivateKey, "GenerateRSA_PrivateKey" }, // 3079826480
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEstapeEncryptBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEstapeEncryptBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_EstapeEncrypt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEstapeEncryptBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEstapeEncryptBPLibrary_Statics::ClassParams = {
	&UEstapeEncryptBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEstapeEncryptBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UEstapeEncryptBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEstapeEncryptBPLibrary()
{
	if (!Z_Registration_Info_UClass_UEstapeEncryptBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEstapeEncryptBPLibrary.OuterSingleton, Z_Construct_UClass_UEstapeEncryptBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEstapeEncryptBPLibrary.OuterSingleton;
}
template<> ESTAPEENCRYPT_API UClass* StaticClass<UEstapeEncryptBPLibrary>()
{
	return UEstapeEncryptBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEstapeEncryptBPLibrary);
UEstapeEncryptBPLibrary::~UEstapeEncryptBPLibrary() {}
// End Class UEstapeEncryptBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_EstapeToolsProject_Plugins_EstapeEncrypt_Source_EstapeEncrypt_Public_EstapeEncryptBPLibrary_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ RSAKeySize_StaticEnum, TEXT("RSAKeySize"), &Z_Registration_Info_UEnum_RSAKeySize, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2691595816U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEstapeEncryptBPLibrary, UEstapeEncryptBPLibrary::StaticClass, TEXT("UEstapeEncryptBPLibrary"), &Z_Registration_Info_UClass_UEstapeEncryptBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEstapeEncryptBPLibrary), 2700922714U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EstapeToolsProject_Plugins_EstapeEncrypt_Source_EstapeEncrypt_Public_EstapeEncryptBPLibrary_h_3448572656(TEXT("/Script/EstapeEncrypt"),
	Z_CompiledInDeferFile_FID_EstapeToolsProject_Plugins_EstapeEncrypt_Source_EstapeEncrypt_Public_EstapeEncryptBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EstapeToolsProject_Plugins_EstapeEncrypt_Source_EstapeEncrypt_Public_EstapeEncryptBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_EstapeToolsProject_Plugins_EstapeEncrypt_Source_EstapeEncrypt_Public_EstapeEncryptBPLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EstapeToolsProject_Plugins_EstapeEncrypt_Source_EstapeEncrypt_Public_EstapeEncryptBPLibrary_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
