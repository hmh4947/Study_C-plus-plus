#include<iostream>

using namespace std;

class Box {
	double length;
	double width;
	double height;
public:
	double getVolume();
	double getHeight();
	void setHeight(double h);
	double getLength();
	void setLength(double l);
	double getWidth();
	void setWidth(double w);


};

double Box::getVolume()
{
	return length * width * height;
}

double Box::getHeight()
{
	return height;
}

void Box::setHeight(double h)
{
	height = h;
}

double Box::getLength()
{
	return length;
}

void Box::setLength(double l)
{
	length = l;
}

double Box::getWidth()
{
	return width;
}

void Box::setWidth(double w)
{
	width = w;
}
int main11() {
	Box box;
	box.setLength(6);
	box.setHeight(5);
	box.setWidth(7);
	cout << "[" << box.getLength() << ","<<
					box.getHeight() << "," << 
					box.getWidth()<<"]"<<endl;
	cout << "상자의 부피: " << box.getVolume() << endl;
	return 0;

}