// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "EstapeEncryptBPLibrary.generated.h"

UENUM(BlueprintType)
enum class RSAKeySize : uint8
{
	RSA_1024 UMETA(DisplayName = "1024"),
	RSA_2048 UMETA(DisplayName = "2048"),
	RSA_3072 UMETA(DisplayName = "3072"),
	RSA_4096 UMETA(DisplayName = "4096")
};

UCLASS()
class UEstapeEncryptBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (Keywords = "Encrypt Bytes AES"), Category = "EstapeEncrypt|Encryptation|AES")
	static bool EncryptAES(TArray<uint8> Data, FString Key, TArray<uint8>& EncryptedData);

	UFUNCTION(BlueprintCallable, meta = (Keywords = "Encrypt Bytes AES"), Category = "EstapeEncrypt|Decryptation|AES")
	static bool DecryptAES(TArray<uint8> EncryptedData, FString Key, TArray<uint8>& DecryptedData);

	UFUNCTION(BlueprintPure, meta = (KeyWords = "Generete hash"), Category = "EstapeEncrypt|Generator|Hash")
	static bool GenerateMD5Hash(FString& ReturnHash);

	//UFUNCTION(BlueprintCallable, meta = (Keywords = "Encrypt Bytes RSA"), Category = "EstapeEncrypt|Encryptation|RSA")
	//static bool EncryptRSA(TArray<uint8> Data, FString PublicKey, TArray<uint8>& EncryptedData);

	//UFUNCTION(BlueprintCallable, meta = (Keywords = "Decrypt Bytes RSA"), Category = "EstapeEncrypt|Decryptation|RSA")
	//static bool DecryptRSA(TArray<uint8> EncryptedData, FString PrivateKey, TArray<uint8>& DecryptedData);

	UFUNCTION(BlueprintCallable, meta = (Keywords = "Generate RSA Keys"), Category = "EstapeEncrypt|Generator|RSA")
	static bool GenerateRSA_PrivateKey(RSAKeySize KeySize, FString& PrivateKey, FString& PublicKey);
};
