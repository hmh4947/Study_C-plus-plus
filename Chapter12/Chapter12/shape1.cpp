#include<iostream>
using namespace std;

class Shape {
protected:
	int x,y;
public:
	Shape(int x, int y):x(x),y(y) {}
	virtual void draw() { cout << "Shape Draw" << endl; }

};
class Rectangle :public Shape {
private:
	int width, height;
public:
	Rectangle(int x, int y, int w, int h):Shape(x,y),width(w),height(h) {}
	void draw() {
		cout << "Rectangle Draw" << endl;
	}
};
int main3() {
	Shape* ps = new Rectangle(0, 0, 100, 100);
	ps->draw();
	delete ps;
	return 0;

}