#include<iostream>
using namespace std;

class Box {
private:
	double length;
	double width;
	double height;
public:
	Box(int l = 0,int w=0,int h=0):length(l),width(w),height(h){}
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
	Box operator+(const Box& b2);
	void print();
};
Box Box::operator+(const Box& b2) {
	Box b;
	b.length = this->length + b2.length;
	b.width = this->width + b2.width;
	b.height = this->height + b2.height;
	return b;

}
void Box::print()
{
	
	cout << "������ ����: " << getLength() << endl;
	cout << "������ �ʺ�: " << getWidth() << endl;
	cout << "������ ����: " << getHeight() << endl;
	cout << "������ ����: " << getVolume() << endl << endl;
}
int main1() {
	Box a(10, 10, 10), b(20, 20, 20), c;
	c = a + b;
	cout << "���� #1" << endl;
	a.print();
	cout << "���� #2" << endl;
	b.print();
	cout << "���� #3" << endl;
	c.print();

	return 0;
}