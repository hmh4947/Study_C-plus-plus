#include<iostream>
using namespace std;

class Point {
private:
	double xval, yval;
public:
	Point(double x = 0.0, double y = 0.0) { xval = x; yval = y; }
	Point(const Point& other) :xval(other.xval),yval(other.yval) {}
	double getX() { return xval; }
	double getY() { return yval; }
	void setX(double x) { xval = x; }
	void setY(double y) { yval = y; }
	void print();

};
void Point::print()
{
	cout << "(" << xval << "," << yval << ")" << endl;
}
void swap(Point& p1, Point& p2);

void swap(Point& p1, Point& p2)
{
	Point temp(p1);
	p1.setX(p2.getX());
	p1.setY(p2.getY());
	p2.setX(temp.getX());
	p2.setY(temp.getY());
	
}

int main4() {
	Point p1(1.2,-2.8);
	Point p2(2.9, 7.4);
	cout << "p1: ";
	p1.print();
	cout << "p2: ";
	p2.print();
	cout << "------swap------" << endl;
	swap(p1, p2);
	cout << "p1: ";
	p1.print();
	cout << "p2: ";
	p2.print();
	return 0;
}
