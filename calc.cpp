#include <iostream>

std::string goyda(){
	std::string s = "bac";
	std::cout << s;
	return s;
}

int main(){
	std::cout << "Привет ";
	goyda();
	return 0;
}