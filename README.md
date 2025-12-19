# Message Coder

Message Coder is a simple C++17 project for encoding and decoding messages.

## Notes

This project is based on a C++ template. For build instructions and full template documentation, see the [Template README](https://github.com/dixe1/cpp-project-template/blob/main/README.md).


## Features

### Project Features
- **Caesar Cipher** – encode and decode messages with a customizable character shift.

### From Template
- **Logger** – logs to console and file (`logs/application.log`) with levels: INFO, WARNING, ERROR, DEBUG.
- **SystemInfoProvider** – retrieves CPU thread count and operating system name.
 
## Usage Examples
 ### General Format
```cpp
Algorithm::action(message, additionalParameters);
```

### Encoding and Decoding Messages

```cpp
#include "Ciphers/Caesar.hpp"
#include "Logger.hpp"

int main()
{
    Logger::consoleLoggingEnabled = true;

    std::string message = "Hello World!";
    std::string encoded = Caesar::encode(message, 16);
    std::string decoded = Caesar::decode(encoded, 16);

    Logger::DEBUG("Encoded: " + encoded);
    Logger::DEBUG("Decoded: " + decoded);
}
```
