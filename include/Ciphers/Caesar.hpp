#pragma once
#include <string>

namespace Caesar
{
	std::string encode(std::string message, const int shift = 16);
	std::string decode(std::string message, const int shift = 16);
} // namespace Caesar