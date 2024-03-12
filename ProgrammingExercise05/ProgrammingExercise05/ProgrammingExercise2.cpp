#include<iostream>
using namespace std;

class Airplane {
	string name;
	int capacity;
	int speed;
public:
	Airplane(string n, int c, int s) :name(n), capacity(c), speed(s) {}
	string getName();
	int getCapacity();
	int getSpeed();
	void setName(string n);
	void setCapacity(int c);
	void setSpeed(int s);
	void print();

};

string Airplane::getName()
{
	return name;
}

int Airplane::getCapacity()
{
	return capacity;
}

int Airplane::getSpeed()
{
	return speed;
}

void Airplane::setName(string n)
{
	name = n;
}

void Airplane::setCapacity(int c)
{
	capacity = c;
}

void Airplane::setSpeed(int s)
{
	speed = s;
}

void Airplane::print()
{
	cout << "������� �̸�: " << name << endl;
	cout << "������� �뷮: " << capacity << endl;
	cout << "������� �ӵ�: " << speed << " Km/h" << endl;
}
int main2() {
	Airplane plane1("���� 787", 900, 300);
	Airplane plane2("������� 350", 400, 1000);
	cout << "����� #1" << endl;
	plane1.print();
	printf("\n");
	cout << "����� #2" << endl;
	plane2.print();
	return 0;
}
