#include <iostream>
using namespace std;
class Shape {
	int x, y;
public:	
	Shape(int x, int y) :x(x), y(y) {}
	virtual double getArea() = 0;
};

double Shape::getArea()
{
	return x*y;
}

class Rect :public Shape {
	int width,height;
public:
	Rect(int x, int y, int w, int h) :Shape(x, y), width(w),height(h) {}
	double getArea() {
		return width * height;
	}
};
class Circle :public Shape {
	int radius;
public:
	Circle(int x, int y, int radius) :Shape(x, y), radius(radius) {}
	double getArea() {
		return radius * radius * 3.14;
	}
};
class Triangle :public Shape {
	int width,height;
public:
	Triangle(int x, int y, int w, int h) :Shape(x, y), width(w), height(h) {}
	double getArea() {
		return width * height * 0.5;
	}
};
int main1() {
	Shape* shapes[3] = { NULL };
	shapes[0] = new Rect(0, 0, 6, 6);
	shapes[1] = new Circle(0, 0, 10);
	shapes[2] = new Triangle(0, 0, 20, 8);

	for (int i = 0; i < 3; i++) {
		cout << "도형 #" << i << "의 면적: " << shapes[i]->getArea() << endl;
	}
	for (int i = 0; i < 3; i++){
		delete shapes[i];
		shapes[i] = nullptr;
	}
	return 0;
}