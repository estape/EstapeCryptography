// Copyright Epic Games, Inc. All Rights Reserved.

#include "EstapeEncryptBPLibrary.h"
#include "EstapeEncrypt.h"
#include "Misc/AES.h"
#include "Misc/Base64.h"
#define UI UI_ST
THIRD_PARTY_INCLUDES_START
#include <openssl/evp.h>
#include <openssl/aes.h>
THIRD_PARTY_INCLUDES_END
#undef UI
#include <openssl/rsa.h>
#include <openssl/pem.h>

UEstapeEncryptBPLibrary::UEstapeEncryptBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

//bool UEstapeEncryptBPLibrary::EncryptRSA(TArray<uint8> Data, FString PublicKey, TArray<uint8>& EncryptedData)
//{
//    // Limpeza da chave pública
//    PublicKey = PublicKey.Replace(TEXT("\r"), TEXT(""));
//    PublicKey = PublicKey.Replace(TEXT("\n"), TEXT(""));
//    PublicKey = PublicKey.Replace(TEXT(" "), TEXT(""));
//    PublicKey = PublicKey.Replace(TEXT("\t"), TEXT(""));
//
//    // Criar o buffer de memória BIO para a chave pública
//    BIO* bio = BIO_new_mem_buf(TCHAR_TO_UTF8(*PublicKey), -1);
//    if (!bio)
//    {
//        return false;
//    }
//
//    // Ler a chave pública do BIO
//    EVP_PKEY* pkey = PEM_read_bio_PUBKEY(bio, nullptr, nullptr, nullptr);
//    BIO_free_all(bio);
//    if (!pkey)
//    {
//        return false;
//    }
//
//    // Criar o contexto para criptografia
//    EVP_PKEY_CTX* ctx = EVP_PKEY_CTX_new(pkey, nullptr);
//    if (!ctx)
//    {
//        EVP_PKEY_free(pkey);
//        return false;
//    }
//
//    // Inicializar a criptografia
//    if (EVP_PKEY_encrypt_init(ctx) <= 0)
//    {
//        EVP_PKEY_CTX_free(ctx);
//        EVP_PKEY_free(pkey);
//        return false;
//    }
//
//    // Determinar o tamanho do buffer necessário para a criptografia
//    size_t outLen = 0;
//    if (EVP_PKEY_encrypt(ctx, nullptr, &outLen, Data.GetData(), Data.Num()) <= 0)
//    {
//        EVP_PKEY_CTX_free(ctx);
//        EVP_PKEY_free(pkey);
//        return false;
//    }
//
//    // Realizar a criptografia
//    EncryptedData.SetNum(outLen);
//    if (EVP_PKEY_encrypt(ctx, EncryptedData.GetData(), &outLen, Data.GetData(), Data.Num()) <= 0)
//    {
//        EVP_PKEY_CTX_free(ctx);
//        EVP_PKEY_free(pkey);
//        return false;
//    }
//
//    // Limpeza dos recursos
//    EVP_PKEY_CTX_free(ctx);
//    EVP_PKEY_free(pkey);
//
//    return true;
//}
//
//bool UEstapeEncryptBPLibrary::DecryptRSA(TArray<uint8> EncryptedData, FString PrivateKey, TArray<uint8>& DecryptedData)
//{
//    // Limpeza da chave privada
//    PrivateKey = PrivateKey.Replace(TEXT("\r"), TEXT(""));
//    PrivateKey = PrivateKey.Replace(TEXT("\n"), TEXT(""));
//    PrivateKey = PrivateKey.Replace(TEXT(" "), TEXT(""));
//    PrivateKey = PrivateKey.Replace(TEXT("\t"), TEXT(""));
//
//    // Criar o buffer de memória BIO para a chave privada
//    BIO* bio = BIO_new_mem_buf(TCHAR_TO_UTF8(*PrivateKey), -1);
//    if (!bio)
//    {
//        return false;
//    }
//
//    // Ler a chave privada do BIO
//    EVP_PKEY* pkey = PEM_read_bio_PrivateKey(bio, nullptr, nullptr, nullptr);
//    BIO_free_all(bio);
//    if (!pkey)
//    {
//        return false;
//    }
//
//    // Criar o contexto para descriptografia
//    EVP_PKEY_CTX* ctx = EVP_PKEY_CTX_new(pkey, nullptr);
//    if (!ctx)
//    {
//        EVP_PKEY_free(pkey);
//        return false;
//    }
//
//    // Inicializar a descriptografia
//    if (EVP_PKEY_decrypt_init(ctx) <= 0)
//    {
//        EVP_PKEY_CTX_free(ctx);
//        EVP_PKEY_free(pkey);
//        return false;
//    }
//
//    // Determinar o tamanho do buffer necessário para a descriptografia
//    size_t outLen = 0;
//    if (EVP_PKEY_decrypt(ctx, nullptr, &outLen, EncryptedData.GetData(), EncryptedData.Num()) <= 0)
//    {
//        EVP_PKEY_CTX_free(ctx);
//        EVP_PKEY_free(pkey);
//        return false;
//    }
//
//    // Realizar a descriptografia
//    DecryptedData.SetNum(outLen);
//    if (EVP_PKEY_decrypt(ctx, DecryptedData.GetData(), &outLen, EncryptedData.GetData(), EncryptedData.Num()) <= 0)
//    {
//        EVP_PKEY_CTX_free(ctx);
//        EVP_PKEY_free(pkey);
//        return false;
//    }
//
//    // Limpeza dos recursos
//    EVP_PKEY_CTX_free(ctx);
//    EVP_PKEY_free(pkey);
//
//    return true;
//}

bool UEstapeEncryptBPLibrary::GenerateRSA_PrivateKey(RSAKeySize KeySize, FString& PrivateKey, FString& PublicKey)
{
    int32 RSAKeySize = 2048;

    switch (KeySize)
    {
    case RSAKeySize::RSA_1024:
        RSAKeySize = 1024;
        break;
    case RSAKeySize::RSA_2048:
        RSAKeySize = 2048;
        break;
    case RSAKeySize::RSA_3072:
        RSAKeySize = 3072;
        break;
    case RSAKeySize::RSA_4096:
        RSAKeySize = 4096;
        break;
    default:
        RSAKeySize = 2048;
        break;
    }

    EVP_PKEY* pkey = EVP_PKEY_new();
    if (!pkey)
    {
        return false;
    }

    EVP_PKEY_CTX* ctx = EVP_PKEY_CTX_new_id(EVP_PKEY_RSA, nullptr);
    if (!ctx)
    {
        EVP_PKEY_free(pkey);
        return false;
    }

    if (EVP_PKEY_keygen_init(ctx) <= 0)
    {
        EVP_PKEY_CTX_free(ctx);
        EVP_PKEY_free(pkey);
        return false;
    }

    if (EVP_PKEY_CTX_set_rsa_keygen_bits(ctx, RSAKeySize) <= 0)
    {
        EVP_PKEY_CTX_free(ctx);
        EVP_PKEY_free(pkey);
        return false;
    }

    if (EVP_PKEY_keygen(ctx, &pkey) <= 0)
    {
        EVP_PKEY_CTX_free(ctx);
        EVP_PKEY_free(pkey);
        return false;
    }

    BIO* privateBio = BIO_new(BIO_s_mem());
    if (!PEM_write_bio_PrivateKey(privateBio, pkey, nullptr, nullptr, 0, nullptr, nullptr))
    {
        BIO_free(privateBio);
        EVP_PKEY_CTX_free(ctx);
        EVP_PKEY_free(pkey);
        return false;
    }

    BIO* publicBio = BIO_new(BIO_s_mem());
    if (!PEM_write_bio_PUBKEY(publicBio, pkey))
    {
        BIO_free(publicBio);
        BIO_free(privateBio);
        EVP_PKEY_CTX_free(ctx);
        EVP_PKEY_free(pkey);
        return false;
    }

    BUF_MEM* privateMem = nullptr;
    BUF_MEM* publicMem = nullptr;
    BIO_get_mem_ptr(privateBio, &privateMem);
    BIO_get_mem_ptr(publicBio, &publicMem);

    PrivateKey = FString(privateMem->length, UTF8_TO_TCHAR(privateMem->data));
    PublicKey = FString(publicMem->length, UTF8_TO_TCHAR(publicMem->data));

    PrivateKey = PrivateKey.Replace(TEXT("-----BEGIN PRIVATE KEY-----"), TEXT("")).Replace(TEXT("-----END PRIVATE KEY-----"), TEXT("")).TrimStartAndEnd();
    PublicKey = PublicKey.Replace(TEXT("-----BEGIN PUBLIC KEY-----"), TEXT("")).Replace(TEXT("-----END PUBLIC KEY-----"), TEXT("")).TrimStartAndEnd();

    BIO_free(privateBio);
    BIO_free(publicBio);
    EVP_PKEY_CTX_free(ctx);
    EVP_PKEY_free(pkey);

    return true;
}

bool UEstapeEncryptBPLibrary::EncryptAES(TArray<uint8> Data, FString Key, TArray<uint8>& EncryptedData)
{
    // Converter a chave de FString para um array de bytes
    const uint8* KeyBytes = (const uint8*)TCHAR_TO_ANSI(*Key);

    // Configurar o contexto de criptografia
    EVP_CIPHER_CTX* Context = EVP_CIPHER_CTX_new();
    if (!Context)
    {
        return false;
    }

    // Configurar a chave e o modo de operação
    const EVP_CIPHER* CipherType = EVP_aes_256_cbc();  // Usando AES-256 em modo CBC
    const uint8 IV[EVP_MAX_IV_LENGTH] = {}; // Vetor de Inicialização (IV) vazio ou predefinido

    if (EVP_EncryptInit_ex(Context, CipherType, nullptr, KeyBytes, IV) != 1)
    {
        EVP_CIPHER_CTX_free(Context);
        return false;
    }

    // Alocar o espaço necessário para os dados criptografados
    EncryptedData.SetNumUninitialized(Data.Num() + AES_BLOCK_SIZE);
    int32 OutLen1 = 0;

    if (EVP_EncryptUpdate(Context, EncryptedData.GetData(), &OutLen1, Data.GetData(), Data.Num()) != 1)
    {
        EVP_CIPHER_CTX_free(Context);
        return false;
    }

    int32 OutLen2 = 0;
    if (EVP_EncryptFinal_ex(Context, EncryptedData.GetData() + OutLen1, &OutLen2) != 1)
    {
        EVP_CIPHER_CTX_free(Context);
        return false;
    }

    // Ajustar o tamanho do array para corresponder ao tamanho real dos dados criptografados
    EncryptedData.SetNum(OutLen1 + OutLen2);

    // Limpar e liberar o contexto de criptografia
    EVP_CIPHER_CTX_free(Context);
    return true;
}

bool UEstapeEncryptBPLibrary::DecryptAES(TArray<uint8> EncryptedData, FString Key, TArray<uint8>& DecryptedData)
{
    // Converter a chave de FString para um array de bytes
    const uint8* KeyBytes = (const uint8*)TCHAR_TO_ANSI(*Key);

    // Configurar o contexto de descriptografia
    EVP_CIPHER_CTX* Context = EVP_CIPHER_CTX_new();
    if (!Context)
    {
        return false;
    }

    // Configurar a chave e o modo de operação
    const EVP_CIPHER* CipherType = EVP_aes_256_cbc();  // Usando AES-256 em modo CBC
    const uint8 IV[EVP_MAX_IV_LENGTH] = {}; // Vetor de Inicialização (IV) vazio ou predefinido

    if (EVP_DecryptInit_ex(Context, CipherType, nullptr, KeyBytes, IV) != 1)
    {
        EVP_CIPHER_CTX_free(Context);
        return false;
    }

    // Alocar o espaço necessário para os dados descriptografados
    DecryptedData.SetNumUninitialized(EncryptedData.Num());
    int32 OutLen1 = 0;

    if (EVP_DecryptUpdate(Context, DecryptedData.GetData(), &OutLen1, EncryptedData.GetData(), EncryptedData.Num()) != 1)
    {
        EVP_CIPHER_CTX_free(Context);
        return false;
    }

    int32 OutLen2 = 0;
    if (EVP_DecryptFinal_ex(Context, DecryptedData.GetData() + OutLen1, &OutLen2) != 1)
    {
        EVP_CIPHER_CTX_free(Context);
        return false;
    }

    // Ajustar o tamanho do array para corresponder ao tamanho real dos dados descriptografados
    DecryptedData.SetNum(OutLen1 + OutLen2);

    // Limpar e liberar o contexto de descriptografia
    EVP_CIPHER_CTX_free(Context);
    return true;
}

bool UEstapeEncryptBPLibrary::GenerateMD5Hash(FString& ReturnHash)
{
    const int32 Length = 16;

    TArray<uint8> RandomBytes;
    RandomBytes.SetNumUninitialized(Length);

    FRandomStream RandomStream;
    RandomStream.GenerateNewSeed();
    for (int32 i = 0; i < Length; i++)
    {
        RandomBytes[i] = RandomStream.RandRange(0, 255);
    }

    TArray<uint8> HashBytes;
    HashBytes.SetNumUninitialized(16);
    FMD5 MD5;
    MD5.Update(RandomBytes.GetData(), RandomBytes.Num());
    MD5.Final(HashBytes.GetData());

    FString HashString;
    HashString.Empty();
    for (uint8 Byte : HashBytes)
    {
        HashString += FString::Printf(TEXT("%02x"), Byte);
    }

    ReturnHash = HashString;
    return true;
}
