#include <iostream>
#include <vector>

std::vector<int> vectFill () {
	std::vector<int> ish;
	int value;
	while (true) {
		std::cout << "Введите число ";
		if (!(std::cin >> value)) {
			break;
		}
		ish.push_back(value);
	}
	return ish;
}

// ex. 6.1
// std::vector<int> vectChanger(std::vector<int> incomeVector) {
// 	std::vector<int> newVector;
// 	for (int i = 0; i < incomeVector.size(); i+=2) {
// 		int a = (incomeVector[i] + incomeVector[i + 1]);
// 		newVector.push_back(a);
// 	}
// 	return newVector;
// }

// ex 6.2
std::vector<int> vectChanger(std::vector<int> incomeVector) {
	std::vector<int> newVector;
	int vectSize = incomeVector.size();
	for (int i = 0; i < incomeVector.size()/2; i ++) {
		int a = (incomeVector[i] + incomeVector[vectSize - i - 1]);
		newVector.push_back(a);
	}

	return newVector;
}

int main() {
	std::vector<int> a = vectFill();
	std::vector<int> output = vectChanger(a);
	for (int i = 0; i<output.size(); i++) {
		std::cout << output[i] << " ";
	}
		return 0;
}