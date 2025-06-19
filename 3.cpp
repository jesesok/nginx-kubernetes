#include <iostream>
#include <string>


std::string compareLex(std::string first, std::string second) {
	if (first == second) {
		return "ident";
	}
	if (first < second) {
		return "first < second";
	}
	if (first > second) {
		return "first > second";
	}
}

std::string compareLen(std::string first, std::string second) {
	if (first.length() == second.length()) {
		return "equal";
	}
	if (first.length() < second.length()) {
		return "second bigger";
	}
	return "first bigger";
}

int main() {
	std::cout << "Введите две строки:\n";
	std::string first;
	std::string second;
	std::getline(std::cin, first);
	std::getline(std::cin,second);
	std::string result_lex = compareLex(first, second);
	std::string result_len = compareLen(first, second);
	std::cout << result_lex << std::endl;
	std::cout << result_len << std::endl;
	return 0;
}