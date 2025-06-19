#include <iostream>
#include <vector>

std::vector<std::string> vectFill () {
	std::vector<std::string> ish;
	std::string value;
	while (true)
	{
		std::cout << "Введите слово ";
		std::cin >> value;
		if (value == "exit") {
			break;
		}
		value[0] = std::toupper(value[0]);
		ish.push_back(value);
	}
	return ish;
}

std::vector<std::string> vectChanger(std::vector<std::string> incomeVector) {
	std::vector<std::string> newVector;

	return newVector;
}

int main() {
	std::vector<std::string> a = vectFill();
	// vectChanger(a);
	for (int i = 0; i<a.size(); i++) {
		if (i%8 == 0){
			std::cout << "\n";
		}
		std::cout << a[i] << " ";
	}
		return 0;
	return 0;
}