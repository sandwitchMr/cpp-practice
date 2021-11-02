#include <iostream>

#include "student.h"

void Student::print()
{
	std::cout << "name: " << name << std::endl;
	std::cout << "age: " << age << std::endl;
	std::cout << "blood: " << blood << std::endl;
	std::cout << "score: " << chineseScore << ", " << mathScore << ", " << englishScore << std::endl;
	std::cout << std::endl;
}

int main()
{
	// Student student1{"sonic1", 10, 2, 100, 90, 80};
	// Student student1 = {"sonic1", 10, 2, 100, 90, 80};
	Student student1("sonic1", 10, 2, 100, 90, 88);
	Student studentGroup1[2] = {{"sonic", 15, 2, 87, 77}, {"tails", 12, 2, 100, 100}};
	// Student studentGroup2[2] = {{12, "sonic", 15, 2, 87, 77, 80}, {11, "tails", 12, 2, 100, 100, 100}};
	student1.print();
	for (auto student : studentGroup1)
	{
		student.print();
	}

	// for (auto student: studentGroup2) {
	//	student.print();
	// }
}