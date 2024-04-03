#include<iostream>
#include<string>
using namespace std;

#include<iostream>
using namespace std;

class Shape2 {
protected:
	int x, y;
public:
	Shape2(int x, int y):x(x),y(y){}
	virtual void draw() = 0;

};
class Rect2 :public Shape2 {
private:
	int width, height;
public:
	Rect2(int x, int y, int w, int h) :Shape2(x, y), width(w), height(h) {}
	void draw() {
		cout << "Rectangle Draw" << endl;

	}
};
int main8() {
	Shape2* ps = new Rect2(0, 0, 100, 100); //OK!
	ps->draw(); //Rectangle의 draw()가 호출된다.
	delete ps;
	return 0;
}