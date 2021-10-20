#include <iostream>

void printVal(int value) {
	std::cout << "Print int: " << value << std::endl;
}

void printVal(float value) {
	std::cout << "Print float: " << value << std::endl;
}

void input(int &var) {
	scanf("%d", &var);
}

void input(float &var) {
	scanf("%f", &var);
}

int main()
{
	int a = 2;
	float b = 2.3f;
	printVal(a);
	printVal(b);
	input(a);
	input(b);
	printVal(a);
	printVal(b);
}
