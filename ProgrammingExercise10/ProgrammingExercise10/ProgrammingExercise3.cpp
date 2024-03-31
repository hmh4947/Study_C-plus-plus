#include<iostream>
using namespace std;

class Box3 {
private:
	double length;
	double width;
	double height;
public:
	Box3(int l = 0, int w = 0, int h = 0) :length(l), width(w), height(h) {}
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
	bool operator<(Box3& b2) {
		return (this->getVolume() < b2.getVolume());
	}

	void print();
};
void Box3::print()
{

	cout << "������ ����: " << getLength() << endl;
	cout << "������ �ʺ�: " << getWidth() << endl;
	cout << "������ ����: " << getHeight() << endl;
	cout << "������ ����: " << getVolume() << endl << endl;
}
int main3() {
	Box3 a(10, 10, 10), b(20, 20, 20);

	cout << "���� #1" << endl;
	a.print();
	cout << "���� #2" << endl;
	b.print();
	cout.setf(cout.boolalpha);
	cout << (a <b);
	return 0;
}