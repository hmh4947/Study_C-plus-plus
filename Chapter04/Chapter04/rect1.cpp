#include<iostream>
using namespace std;

class Rectangle {
public: 
	int width, height;
	int calcArea() {
		return width * height;
	}
};
int main3() {
	Rectangle obj;
	obj.width = 2;
	obj.height = 6;
	int area = obj.calcArea();
	cout << "사각형의 넓이: " << area << endl;
	return 0;
}