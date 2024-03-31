#include<iostream>
using namespace std;

class Box4 {
private:
	double length;
	double width;
	double height;
public:
	Box4(int l = 0, int w = 0, int h = 0) :length(l), width(w), height(h) {}
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
	bool operator<(Box4& b2) {
		return (this->getVolume() < b2.getVolume());
	}

	void print();
	friend void printBox(Box4 box);
};
void Box4::print()
{

	cout << "������ ����: " << getLength() << endl;
	cout << "������ �ʺ�: " << getWidth() << endl;
	cout << "������ ����: " << getHeight() << endl;
	cout << "������ ����: " << getVolume() << endl << endl;
}
void printBox(Box4 box)
{
	cout << "������ ����: " << box.getLength() << endl;
	cout << "������ �ʺ�: " << box.getWidth() << endl;
	cout << "������ ����: " << box.getHeight() << endl;
	cout << "������ ����: " << box.getVolume() << endl << endl;
}

int main4() {
	Box4 a(10, 10, 10), b(20, 20, 20);

	cout << "���� #1" << endl;
	printBox(a);
	return 0;
}

