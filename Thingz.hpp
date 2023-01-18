#pragma once
#include <string>

class Thingz {
public:
	std::string CaesarCipherEncrypt(std::string& input, int& shift);

	std::string XorEncrypt(const std::string& input, const int& key);

	std::string XorDecrypt(const std::string& cipher, const int& key);

	int DecToBin(int number);
};
