#include <iostream>

class Student {
public:
	Student(const char *name1, int age1, int blood1, int chineseScore1, int mathScore1, int englishScore1) {
		snprintf(name, sizeof(name), name1);
		age = age1;
		blood = blood1;
		chineseScore = chineseScore1;
		mathScore = mathScore1;
		englishScore = englishScore1;
	}
	int test1;
	char name[100];
	int age;
	int blood;
	int chineseScore;
	int mathScore;
	int englishScore;

	void print() {
		std::cout << "name: " << name << std::endl;
		std::cout << "age: " << age << std::endl;
		std::cout << "blood: " << blood << std::endl;
		std::cout << "score: " << chineseScore << ", " << mathScore << ", " << englishScore << std::endl;
		std::cout << std::endl;
	}
};

int main() {
	//Student student1{"sonic1", 10, 2, 100, 90, 80};
	//Student student1 = {"sonic1", 10, 2, 100, 90, 80};
	Student studentGroup1[2] = {{"sonic", 15, 2, 87, 77, 80}, {"tails", 12, 2, 100, 100, 100}};
	//Student studentGroup2[2] = {{12, "sonic", 15, 2, 87, 77, 80}, {11, "tails", 12, 2, 100, 100, 100}};
	//student1.print();
	for (auto student: studentGroup1) {
		student.print();
	}

	//for (auto student: studentGroup2) {
	//	student.print();
	//}
}