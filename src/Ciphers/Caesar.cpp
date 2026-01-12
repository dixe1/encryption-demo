#include "Ciphers/Caesar.hpp"
#include <string>
#include <cctype>

static void shiftChar(std::string& message, const int shift, int i)
{
	// Determine the base character ('A' or 'a')
	char a_or_A = std::isupper(message[i]) ? 'A' : 'a';

	// Check if the character is an alphabet letter
	if (!(std::isalpha(message[i])))
		return;

	// Shift the character and wrap around the alphabet
	message[i] = (message[i] - a_or_A + shift + 26) % 26 + a_or_A;
}

static std::string start(std::string message, const int shift)
{
	for (std::size_t i{}; i < message.length(); i++)
	{
		shiftChar(message, shift, i);
	}

	return message;
}

namespace Caesar
{
	std::string decode(std::string message, int shift)
	{
		// Inverse shift for decoding
		return start(message, -shift);
	}

	std::string encode(std::string message, const int shift)
	{
		return start(message, shift);
	}
} // namespace Caesar