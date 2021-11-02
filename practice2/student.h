#include <iostream>

class Student {
public:
	// If defining a construct, the default constructor will be disable
	// EX: {int, const char*, int, int, int, int, int} will be disable
	Student(const char *name1, int age1, int blood1, int chineseScore1, int mathScore1, int englishScore1 = 100) {
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

	void print();
};