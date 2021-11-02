#include <iostream>

class Square {
public:
	Square(int len1) {
		len = len1;
	}

	int getLen() {
		return len;
	}

	int area() {
		return len * len;
	}
private:
	int len;
};

int main() {
	Square square1(10);
	Square square2(20);
	std::cout << "Square with len " << square1.getLen() << " area: " << square1.area() << std::endl;
	std::cout << "Square with len " << square2.getLen() << " area: " << square2.area() << std::endl;
}