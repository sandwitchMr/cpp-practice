#include <iostream>

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

int divide(int a, int b) {
	return a / b;
}

int mod(int a, int b) {
	return a % b;
}

int main() {
	int (*calculate[5])(int a, int b) = { add, sub, mul, divide, mod};
	int a = 2;
	int b = 5;

	for (int i = 0; i < 5; i++) {
		std::cout << calculate[i](a, b) << std::endl;
	}
}