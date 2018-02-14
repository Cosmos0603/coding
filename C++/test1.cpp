#include <iostream>

int main(){
	int x = 3;
	int y = 4;
	//int& m = x;
	const int z = 5;
	//int& n = z;
	const int& m = z;
	//std::cout << n << std::endl;
}
