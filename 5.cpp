#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

std::string punctuation(){
	std::string input_string;
	std::cin >> input_string;
	input_string.erase(std::remove_if(input_string.begin(), input_string.end(), ::ispunct), input_string.end());
	return input_string;
}

int main(){
	std::string p = punctuation();
	std::cout << "Результат: " << p;
	return 0;
}