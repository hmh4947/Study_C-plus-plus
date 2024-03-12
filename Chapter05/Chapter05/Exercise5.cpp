#include<iostream>
using namespace std;

class Cube {
private:
	double side; //������ü�� �� ��
public:
	
	Cube() {
		side = 0;
	}
	Cube(double s):side(s){}
	double getSide();
	void setSide(double s);
	double getVolume();
	void setVolume(double s);
	void print();
};

double Cube::getSide()
{
	return side;
}

void Cube::setSide(double s)
{
	side = s;
}

double Cube::getVolume()
{
	return side*side*side;
}

void Cube::print()
{
	cout << "������ü�� �� ��: " << side << endl;
	cout << "������ü�� ����: " << getVolume() << endl;

}
int main13() {
	Cube c(5);
	c.print();
	return 0;
}
