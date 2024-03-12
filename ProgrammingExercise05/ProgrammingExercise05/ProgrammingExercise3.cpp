#include<iostream>
using namespace std;

class Box {
private:
	int length;
	int width;
	int height;
public:
	Box(int l, int w, int h) :length(l), width(w), height(h) {}
	Box() {
		length = 0;
		width = 0;
		height = 0;
	}
	bool empty();
	int getVolume();
	void setVolume(int l, int w, int h);
	void print();

};

bool Box::empty()
{
	return (length > 0 && width > 0 && height > 0) ? true : false;
}

int Box::getVolume()
{
	return length * width * height;
}

void Box::setVolume(int l, int w, int h)
{
	length = l;
	width = w;
	height = h;

}

void Box::print()
{
	cout << "������ ����: " << length << endl;
	cout << "������ ����: " << width << endl;
	cout << "������ ����: " << height << endl;
	cout << "������ ����: " << getVolume() << endl;
}
int main3() {
	Box box1;
	Box box2;
	cout << "���� #1" << endl;
	box1.print();
	printf("\n");
	cout << "���� #2" << endl;
	box2.setVolume(3, 2, 4);
	box2.print();


	return 0;

}
