#include<iostream>
#include<windows.h>
using namespace std;

class Circle_race {


public:
	
	Circle_race(int xval, int yval, int r);
	void draw();
	void move();
private:
	int x, y, radius;
};

Circle_race::Circle_race(int xval, int yval, int r)
	:x(xval),y(yval),radius(r)
{
}

void Circle_race::draw()
{
	HDC hdc = GetWindowDC(GetForegroundWindow());
	Ellipse(hdc, x - radius, y - radius, x + radius, y + radius);
}

void Circle_race::move()
{
	x += rand() % 50;
}
int main6() {
	Circle_race c1(100, 100, 50);
	Circle_race c2(100, 200, 40);
	for (int i = 0; i < 20; i++) {
		c1.move();
		c1.draw();

		c2.move();
		c2.draw();
		Sleep(1000);

	}
	return 0;

}