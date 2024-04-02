#include<iostream>
#include<string>
#include<windows.h>
using namespace std;

class Circle {
protected:
	int x, y, radius;
public:
	Circle(int x, int y, int radius):x(x),y(y),radius(radius){}

	void draw() {
		HDC hdc = GetWindowDC(GetForegroundWindow());
		Ellipse(hdc, x+radius, y+radius, x -radius, y -radius);

	}
};
class ColoredCircle:public Circle {
	int red, green, blue;
public:
	ColoredCircle(int x,int y,int radius,int r,int g,int b) :Circle(x, y, radius),red(r),green(g),blue(b) {}
	void draw() {
		HDC hdc = GetWindowDC(GetForegroundWindow());
		SelectObject(hdc, GetStockObject(DC_BRUSH));
		SetDCBrushColor(hdc, RGB(red, green, blue));
		Ellipse(hdc, x + radius, y + radius, x - radius, y - radius);

	}
};
int main2() {
	Circle c(300,300,50);
	ColoredCircle c1(500, 300, 50, 255, 0, 0);
	c.draw();
	c1.draw();
	return 0;

}