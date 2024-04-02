#include<windows.h>
class Rect {
protected:
	int x, y, width, height;
public:
	Rect(int x,int y, int w, int h):x(x),y(y),width(w),height(h){}
	void draw() {
		HDC hdc = GetWindowDC(GetForegroundWindow());
		Rectangle(hdc, x, y, x + width, y + height);

	}
};
class ColoredRect :public Rect {
	int red, green, blue;
public:
	ColoredRect(int x, int y, int w, int h, int r, int g, int b) :
		Rect(x, y, h, w), red(r), green(g), blue(b) {}
	void draw() {
		HDC hdc = GetWindowDC(GetActiveWindow());
		SelectObject(hdc, GetStockObject(DC_BRUSH));
		SetDCBrushColor(hdc, RGB(red, green, blue));
		Rectangle(hdc, x, y, x + width, y + height);
		
	}
};
int main5() {
	Rect r1(300, 300, 80, 80);
	ColoredRect r2(300, 300, 80, 80, 255, 0, 0);
	r1.draw();
	r2.draw();
	return 0;
}