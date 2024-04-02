#include<iostream>
#include<string>
using namespace std;

class Shape {
	int x, y;
	string color;
public:
	Shape(int x, int y, string c):x(x),y(y),color(c){}
	int getX() { return x; }
	int getY() { return y; }
	string getColor() { return color; }
	void setX(int x) { this->x = x; }
	void setY(int y) { this->y = y; }
	double getArea() {
		return getX() * getY();
	}

};
class Circle :public Shape {
	int radius;
public:
	Circle(int x, int y, string c,int r) :Shape(x,y,c),radius(r){}
	int getRadius() { return radius; }
	void setRadius(int r) { radius = r; }
	double getArea() {
		return	getRadius() * getRadius() * 3.14;
	}

};
int main5() {
	Circle c(10,10,"red",20);
	cout << "원의 면적: " << c.getArea() << endl;
	return 0;
}