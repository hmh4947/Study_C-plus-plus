#include<iostream>
#include<string>
#include<windows.h>
#include<conio.h>
#include<time.h>

using namespace std;

class Circle {
public:
	
	int x, y, radius;
	string color;
	void draw();
	Circle() { x = 1; y = 1; radius = 5; }
	~Circle() {}
};

void Circle::draw()
{
	HDC hdc = GetWindowDC(GetForegroundWindow());
	Ellipse(hdc, x - radius, y - radius, x + radius, y + radius);
}
int main10() {
	srand(time(NULL));
	int n;
	Circle* p;

	cout << "몇 개의 원을 만들까요: ";
	cin >> n;
	p = new Circle[n];
	for (int i = 0; i < n; i++) {
		p[i].x = 100 + rand() % 300;
		p[i].y = 100 + rand() % 200;
		p[i].radius = rand() % 100;
		p[i].draw();
	}
	delete[] p;
	_getch();
	return 0;
}
