#include<iostream>
#include<string>
using namespace std;

class Point {
	int x, y;
public:
	Point(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}
	~Point() {}
	int getX() { return x; }
	int getY() { return y; }
	void setX(int x) { this->x = x; }
	void setY(int y) { this->y = y; }
};
class ThreeDPoint :public Point{
	int z;
public:
	ThreeDPoint(int x=0, int y=0, int z=0) :Point(x, y) { this->z = z; }
	~ThreeDPoint(){}
	int getZ() { return z; }
	void setZ(int z) { this->z = z; }
	void print() {
		cout << "(" << getX() << "," << getY() << "," << getZ() << ")" << endl;
	}


	ThreeDPoint operator+(ThreeDPoint& p2){
		ThreeDPoint p;
		p.setX(this->getX() + p2.getX());
		p.setY(this->getY() + p2.getY());
		p.setZ(this->getZ() + p2.getZ());
		return p;


	}
};
int main1() {
	ThreeDPoint p1(10, 10, 10);
	ThreeDPoint p2(10, 10, 10);
	ThreeDPoint p3;
	p3 = p1 + p2;
	cout << "p1";
	p1.print();
	cout << "p2";
	p2.print();
	cout << "p3";
	p3.print();
	return 0;
}
