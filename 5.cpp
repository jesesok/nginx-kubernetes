#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

std::string punctuation(){
	std::string input_string;
	std::cin >> input_string;
	std::string exitArr;
	for (int i = 0; i < input_string.size(); i++)
	{
		if (std::ispunct(input_string[i])  == false ) {
			exitArr += input_string[i];
		}
	}
	return exitArr;
}

int main(){
	std::string p = punctuation();
	std::cout << "Результат: " << p;
	return 0;
}