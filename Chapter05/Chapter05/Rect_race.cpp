#include<windows.h>
#include <iostream>
using namespace std;

class Rect_race {
	int width, height;
	int x, y;
public:
	Rect_race(int wx = 0, int wy = 0, int wid = 10, int hei = 10);
	void draw();
	void move();
};



Rect_race::Rect_race(int wx, int wy, int wid, int hei)
	:x(wx), y(wy), width(wid), height(hei)
{
}

void Rect_race::draw()
{
	HDC hdc = GetWindowDC(GetForegroundWindow());
	Rectangle(hdc, x, y, x + width, y + height);
}

void Rect_race::move()
{
	x += rand() % 50;
}
int main8() {
	Rect_race r(200, 200, 100, 100);
	for (int i = 0; i < 10; i++) {
		r.move();
		r.draw();
		Sleep(1000);
	}
	return 0;
}