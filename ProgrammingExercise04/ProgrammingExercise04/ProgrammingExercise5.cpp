#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

class Dice {
public:
	int face;
	void roll();
	void print();
};

void Dice::roll()
{

	face = (int)(rand() % 6 + 1);

}

void Dice::print()
{
	cout << "주사위 값: " << face << endl;
}
int main5() {
	srand(time(NULL));
	Dice dice;
	Dice dice2;

	dice.roll();
	dice.print();

	dice2.roll();
	dice2.print();

	return 0;
}

