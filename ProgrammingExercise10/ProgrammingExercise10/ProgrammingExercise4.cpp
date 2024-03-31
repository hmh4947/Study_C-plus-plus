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

	cout << "상자의 길이: " << getLength() << endl;
	cout << "상자의 너비: " << getWidth() << endl;
	cout << "상자의 높이: " << getHeight() << endl;
	cout << "상자의 부피: " << getVolume() << endl << endl;
}
void printBox(Box4 box)
{
	cout << "상자의 길이: " << box.getLength() << endl;
	cout << "상자의 너비: " << box.getWidth() << endl;
	cout << "상자의 높이: " << box.getHeight() << endl;
	cout << "상자의 부피: " << box.getVolume() << endl << endl;
}

int main4() {
	Box4 a(10, 10, 10), b(20, 20, 20);

	cout << "상자 #1" << endl;
	printBox(a);
	return 0;
}

