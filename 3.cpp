#include <iostream>
#include <string>


std:: string compare_lex(std::string first, std::string second){
	if (first == second){
		return "ident";
	}
	if (first < second){
		return "first < second";
	}
	if (first > second) {
		return "first > second";
	}
}
std:: string compare_len(std::string first, std::string second){
	if (first.length() == second.length()){
		return "equal";
	}
	if (first.length() < second.length()){
		return "second bigger";
	}
	return "first bigger";
}

int main(){
	std::cout << "Введите две строки:\n";
	std::string first;
	std::string second;
	std::cin >> first;
	std::cin >> second;
	std::string result_lex = compare_lex(first, second);
	std::string result_len = compare_len(first, second);
    std::cout << result_lex << std::endl;
    std::cout << result_len << std::endl;
	return 0;
}