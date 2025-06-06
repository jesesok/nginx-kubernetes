#include <iostream>
#include <string>

std::string conc(){
	std::string output;
	while(true){
		std::string input;
		std::cout << "Введите слова (для выхода введите 'exit'):\n";
		std:: cin >> input;
		if (input == "exit"){
			break;
		}
		output += input + " ";
	}
	return output;
}

int main(){
	std::string res=conc();
	std::cout << "Результат: " << res << std::endl;
	return 0;
}