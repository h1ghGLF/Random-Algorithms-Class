#include "Thingz.hpp"

std::string Thingz::CaesarCipherEncrypt(std::string& input, int& shift) {
	std::string result = "";

	for (unsigned int i = 0; i < input.length(); i++) {
		if (isupper(input[i])) {
			result += char(int(input[i] + shift - 65) % 26 + 65);
		}

		else {
			result += char(int(input[i] + shift - 97) % 26 + 97);
		}
	}

	return result;
}

std::string Thingz::XorEncrypt(const std::string & input, const int& key) {
	std::string result = "";

	for (auto& c : input) {
		char resultChar = char(c ^ key);
		result += resultChar;
	}

	return result;
}

std::string Thingz::XorDecrypt(const std::string& cipher, const int& key) {
	std::string result = "";

	for (auto& c : cipher) {
		char resultChar = char(c ^ key);
		result += resultChar;
	}

	return result;
}

int Thingz::DecToBin(int number) {
	int rem;
	int binary = 0;
	int var = 1;

	do {
		rem = number % 2;
		number = number / 2;
		binary = binary + (rem * var);
		var = var * 10;
	} while (number > 0);

	return binary;
}
