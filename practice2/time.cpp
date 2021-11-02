#include <iostream>

class Time
{
public:
	Time()
	{
		hour = 0;
		minute = 0;
		second = 0;
	}
	Time(int h, int m, int s)
	{
		hour = h;
		minute = m;
		second = s;
	}
	~Time()
	{
	}

	void setHour(int h) { 
		if (h >=0 && h < 24) {
			hour = h;
		} else {
			std::cout << "Invalid data. Hour should be in [0, 23] range" << std::endl;
			hour = 0;
		}
	}
	void setMinute(int m) { 
		if (m >=0 && m < 60) {
			minute = m;
		} else {
			std::cout << "Invalid data. Minute should be in [0, 60] range" << std::endl;
			minute = 0;
		}
	}
	void setSec(int s) { 
		if (s >=0 && s < 60) {
			second = s;
		} else {
			std::cout << "Invalid data. Second should be in [0, 60] range" << std::endl;
			second = 0;
		}
	}

	int getHour() { return hour; }
	int getMinute() { return minute; }
	int getSecond() { return second; }

	void print() {
		std::cout << "Current time:" << hour << ":" << minute << ":" << second << std::endl;
	}
	int diff(Time t2) {
		return (hour - t2.hour)*3600 + (minute - t2.minute) * 60 + (second - t2.second);
	}

private:
	int hour;
	int minute;
	int second;
};

int main()
{
	Time curr(23, 16, 50);
	curr.print();
	curr.setHour(14);
	curr.print();
	curr.setHour(25);
	curr.print();

	Time prev(23, 16, 52);
	Time curr2(23, 20, 40);
	std::cout << curr2.diff(prev) << std::endl;
}