#include <iostream>

class Square {
public:
	int len;
	Square(int len1) {
		len = len1;
	}

	int area() {
		return len * len;
	}
};

int main() {
	Square square1(10);
	Square square2(20);
	std::cout << "Square with len " << square1.len << " area: " << square1.area() << std::endl;
	std::cout << "Square with len " << square2.len << " area: " << square2.area() << std::endl;
}