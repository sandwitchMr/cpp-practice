#include <iostream>

template<typename T>
void addFive(T &a) {
	a += 5;
}

int main()
{
    int a = 1;
    std::cout << a << std::endl;
    addFive(a);
    std::cout << a << std::endl;
    return 0;
}