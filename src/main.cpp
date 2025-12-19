#include "Includes.hpp"

// cpp 17

int main()
{
	Logger::consoleLoggingEnabled = true;

	std::string encodedMessage = Caesar::encode("Hello World!");
	std::string decodedMessage = Caesar::decode(encodedMessage);

	Logger::DEBUG(encodedMessage);
	Logger::DEBUG(decodedMessage);

}
