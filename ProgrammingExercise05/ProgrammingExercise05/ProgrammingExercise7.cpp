#include<iostream>
using namespace std;

class Character {
	int x, y;
	double HP;
public:
	Character() {
		x = 0;
		y = 0;
		HP = 100;

	}
	Character(int px, int py, double pHP ):x(px),y(py),HP(pHP){}
	int getX();
	void setX(int px);
	int getY();
	void setY(int py);
	double getHP();
	void setHP(int pHP);
	void print();
};

int Character::getX()
{
	return x;
}

void Character::setX(int px)
{
	x = px;
}

int Character::getY()
{
	return y;
}

void Character::setY(int py)
{
	y = py;
}

double Character::getHP()
{
	return HP;
}

void Character::setHP(int pHP)
{
	HP = pHP;
}

void Character::print()
{
	cout << "x: " << x;
	cout << " y: " << y;
	cout << " HP: " << HP << endl;;
}
int main7() {
	for(int i=0; i<100; i+=10)
	{
		Character c(i, 0, 100);
		c.print();
	}
	return 0;
}