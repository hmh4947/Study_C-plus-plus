#include<iostream>
using namespace std;

class Box2 {
private:
	double length;
	double width;
	double height;
public:
	Box2(int l = 0, int w = 0, int h = 0) :length(l), width(w), height(h) {}
	double getVolume(void) {
		return length * width * height;

	}
	double getLength() {
		return length;
	}
	double getWidth() {
		return width;

	}
	double getHeight() {
		return height;

	}

	bool operator==(const Box2& b2) {
		return (length == b2.length &&
			width == b2.width &&
			height == b2.height);
	}
	bool operator!=(const Box2& b2) {
		return !(*this == b2);
	}
	void print();
};
void Box2::print()
{

	cout << "������ ����: " << getLength() << endl;
	cout << "������ �ʺ�: " << getWidth() << endl;
	cout << "������ ����: " << getHeight() << endl;
	cout << "������ ����: " << getVolume() << endl << endl;
}
int main2() {
	Box2 a(10, 10, 10), b(20, 20, 20);
	
	cout << "���� #1" << endl;
	a.print();
	cout << "���� #2" << endl;
	b.print();
	cout.setf(cout.boolalpha);
	cout << (a == b);
	return 0;
}