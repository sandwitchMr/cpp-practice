#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Player
{
public:
	Player(string n, int h, int a)
	{
		name = n;
		hp = h;
		atk = a;
	}

	void attack(Player& p2) {
		p2.setHP(p2.getHp() -atk);

		cout << "----------------" << endl;
		cout << name << " has attack " << p2.name << endl;
		cout << p2.name << " get " << atk << " point damage" << endl;
		cout << p2.name << " remain " << p2.hp << " hp" << endl;
		cout << "----------------" << endl;
		cout << endl;
	}

	void setHP(int h) {
		hp = h < 0 ? 0 : h;
	}

	int getHp() {
		return hp;
	}
	string getName() {
		return name;
	}

	bool isAlive() {
		return hp > 0;
	}


private:
	string name;
	int hp;
	int atk;
};

int main()
{
	srand(time(NULL));
	Player p1("The brave", rand() % 1000 + 1, rand() % 100 + 1);
	Player p2("Devil", rand() % 1000 + 1, rand() % 1000 + 1);

	while (p1.isAlive() && p2.isAlive()) {
		p1.attack(p2);
		p2.attack(p1);
	}

	if (p1.isAlive()) {
		std::cout<< p1.getName() << " wins" << endl;
	} else if (p2.isAlive()) {
		std::cout<< p2.getName() << " wins" << endl;
	} else {
		std::cout<< "tie" << endl;
	}
}