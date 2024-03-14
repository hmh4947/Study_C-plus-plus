#include<Windows.h>
#include<conio.h>
#include<iostream>

using namespace std;

class Circle {
public:

	int x, y;
	int radius;
	Circle() :x(0), y(0), radius(0) {}
	Circle(int x,int y, int r): x(x),y(y),radius(r){}

	void draw() {
		int r = radius / 2;
		HDC hdc = GetWindowDC(GetForegroundWindow());
		Ellipse(hdc, x - r, y - r, x + r, y + r);

	}
};
int main2() {
	Circle objArray[10];

	while (true) {
		
		for (Circle& c : objArray) {
			c.x = rand() % 500;
			c.y = rand() % 300;
			c.radius = rand() % 100;
			c.draw();
		}
		char ch = _getch();
		//if (ch == 'q')break;
		if (ch == 'm') {
			for(Circle&c:objArray)
			{
				c.x += 100;
				c.draw();
			}
			
		}
	}
	return 0;
}