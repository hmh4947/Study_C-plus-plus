#include<iostream>
#include<windows.h>
using namespace std;

class Rect {
	int width, height;
	int x, y;

public:
	
	Rect(int wx = 0, int wy = 0, int w = 10, int h = 10);
	int rectArea();
	void draw_rect();
};


void Rect::draw_rect()
{
	HDC hdc = GetWindowDC(GetForegroundWindow());
	Rectangle(hdc, x, y,x + width,y + height);
}

Rect::Rect(int wx, int wy, int w, int h)
{
	x =wx;
	y = wy;
	width = w;
	height = h;

}

int Rect::rectArea()
{
	return width * height;
}
int main7() {
	int a, b, wid, hei;
	srand(time(NULL));

	for (int i = 0; i < 10; i++) {
		a = rand() % 300 + 1;
		b = rand() % 300 + 1;
		while (1)
			if ((wid = rand() % 300 + 1) > a)break;
		while (1)
			if ((hei = rand() % 300 + 1) > b)break;

	
		Rect r(a,b, wid,hei);
		r.draw_rect();

	}

	return 0;
}