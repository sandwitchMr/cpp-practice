#include <iostream>

using namespace std;

class Person
{
public:
	virtual void Input()
	{
		cout << "Input name:";
		cin >> mName;
	}

	virtual void Output()
	{
		cout << "Name:" << mName << endl;
	}

private:
	string mName;
	string mStudentId;
};

class Student : public Person
{
public:
	void Input()
	{
		Person::Input();
		cout << "Input student ID:";
		cin >> mStudentId;
	}

	void Output()
	{
		Person::Output();
		cout << "ID:" << mStudentId << endl;
	}

private:
	string mStudentId;
};

class Teacher : public Person
{
public:
	void Input()
	{
		Person::Input();
		cout << "Input title:";
		cin >> mTitle;
	}

	void Output()
	{
		Person::Output();
		cout << "Title:" << mTitle << endl;
	}
private:
	string mTitle;
};

int main()
{
	// - Case 1
	//Person sonic;
	//Student tails;
	//Teacher amy;

	//sonic.Input();
	//tails.Input();
	//amy.Input();
	//sonic.Output();
	//tails.Output();
	//amy.Output();

	// - Case 2
	//Person people[] = {
	//	Person(),
	//	Student(),
	//	Teacher(),
	//};

	//for (int i = 0; i < sizeof(people)/sizeof(Person); ++i) {
	//	cout << "Input " << i << "th data of person" << endl;
	//	people[i].Input();
	//}

	//for (int i = 0; i < sizeof(people)/sizeof(Person); ++i) {
	//	cout << "Out " << i << "th data of person" << endl;
	//	people[i].Output();
	//}

	Person* people[] = {
		new Person(),
		new Student(),
		new Teacher(),
	};

	for (int i = 0; i < sizeof(people)/sizeof(Person*); ++i) {
		cout << "Input " << i << "th data of person" << endl;
		people[i]->Input();
	}
	for (int i = 0; i < sizeof(people)/sizeof(Person*); ++i) {
		delete people[i];
	}

	return 0;
}