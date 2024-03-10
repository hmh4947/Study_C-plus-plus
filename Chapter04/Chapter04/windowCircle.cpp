#include<iostream>
#include<windows.h>


using namespace std;
class Circle {
public:
	int x, y,radius;
	string color;

	double calcArea() {
		return 3.14 * radius * radius;
	}
	void draw() {
		HDC hdc = GetWindowDC(GetForegroundWindow());

		Ellipse(hdc, x-radius, y - radius, x + radius, y+ radius);
	}
};
int main4() {
	
	Circle c;
	c.y = 200;
	c.radius = 50;
	for (c.x = 100; c.x <= 200; c.x += 10) {
		c.draw();
	}
	return 0;
}