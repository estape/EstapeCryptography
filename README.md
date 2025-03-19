# Estape Cryptography

**Estape Cryptography** is a plugin for Unreal Engine 5 that provides robust data encryption functionalities directly accessible through Blueprints. It leverages the OpenSSL library to ensure secure and efficient encryption.

## Features

- **AES Encryption/Decryption**: Encrypt and decrypt data using the AES algorithm.
- **MD5 Hash Generation**: Generate MD5 hashes for strings.
- **Blueprint Integration**: All functionalities are exposed as Blueprint nodes for ease of use.
- **RSA Key Sizes**: Support for multiple RSA key sizes (1024, 2048, 3072, 4096).

### Key Files

- **`Estape Cryptography.uplugin`**: Plugin configuration file.
- **`Source/Estape Cryptography/Private/`**: Contains the implementation of the plugin.
- **`Source/Estape Cryptography/Public/`**: Contains public headers for Blueprint integration.
- **`ThirdParty/openssl/`**: Includes OpenSSL headers and libraries.

## Installation

1. Copy the `Estape Cryptography` folder into the `Plugins` directory of your Unreal Engine project.
2. Open your project in Unreal Engine and enable the plugin via **Edit > Plugins**.
3. Ensure your project is set up to compile C++ plugins.

## Usage

1. Open a Blueprint in your Unreal Engine project.
2. Search for the plugin's functions in the **Palette** tab.
3. Drag and drop the desired nodes into your Blueprint to perform encryption, decryption, or hash generation.

### Example Blueprint Nodes

- **EncryptAES**: Encrypts data using AES.
- **DecryptAES**: Decrypts AES-encrypted data.
- **GenerateMD5Hash**: Generates an MD5 hash for a given string.

## Dependencies

- [OpenSSL](https://www.openssl.org/): Used for cryptographic operations.

## Contributing

Contributions are welcome! Feel free to open issues or submit pull requests.

## License

This project is licensed under the [MIT License](LICENSE).

---

**Note**: This plugin is intended for educational and experimental purposes. It is not recommended for critical security applications without additional auditing.