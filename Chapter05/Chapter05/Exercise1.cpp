#include<iostream>
using namespace std;

class Point {
private:
	int x, y;
public:
	Point() {
		x = 0;
		y = 0;
	}
	Point(int xpos, int ypos):
		x(xpos),y(ypos){}
	~Point() {}

	int getX();
	void setX(int xpos);
	int getY();
	void setY(int ypos);
	void print();


};

int Point::getX()
{
	return x;
}

void Point::setX(int xpos)
{
	x = xpos;
}

int Point::getY()
{
	return y;
}

void Point::setY(int ypos)
{
	y = ypos;
}

void Point::print()
{
	cout << "(" << x << "," << y << ")";
}
int main9() {
	Point p(100,200);
	p.print();
	return 0;
}
