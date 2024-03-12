#include<iostream>
#include<windows.h>
using namespace std;

class Circle {

	int x, y, radius;
	string color;
public:
	void draw();
	Circle(int xval = 0, int yval = 0, int r = 0, string c = "");
	double calcArea();
};

void Circle::draw()
{
	HDC hdc = GetWindowDC(GetForegroundWindow());
	Ellipse(hdc, x - radius, y - radius, x + radius, y + radius);
}

Circle::Circle(int xval, int yval, int r, string c)
{
	x = xval;
	y = yval;
	radius = r;
	color = c;

}

double Circle::calcArea()
{
	return radius*radius*3.14;
}




int main5() {
	for (int i = 0; i < 10; i++) {
		int x = 100 + rand() % 300;
		int y = 100 + rand() % 300;
		int r = rand() % 100;
		Circle c(x, y, r, "yellow");
		c.draw();
		
	}
	
	return 0;
}