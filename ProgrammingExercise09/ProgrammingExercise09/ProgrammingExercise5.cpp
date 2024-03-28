#include<iostream>
using namespace std;

class Box {
private:
	double length;
	double width;
	double height;
public:
	static int count;
	Box(double l=2.0, double w=2.0, double h=2.0): length(l),width(w),height(h){
		length = l;
		width = w;
		height = h;
		count++;
	}
	double Volume() {
		return length * width * height;
	}
	static int getCount() {
		return count;
	}
	
};
int Box::count = 0;
int main5() {
	Box b1(1, 1, 1);
	Box b2(2, 2, 2);
	cout << "ÀüÃ¼ °´Ã¼ ¼ö: " << Box::getCount() << endl;
	return 0;

}