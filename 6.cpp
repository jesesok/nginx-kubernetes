#include <iostream>
#include <vector>

std::vector<int> privet (){
	std::vector<int> ish;
	int value;
	while (true){
		if (!(std::cin >> value)){
			break;
		}
		ish.push_back(value);
		
	}
}

int main(){
	return 0;
}