#include<iostream>
using namespace std;

class Circle {
public:
	int radius;
	string color;
	double calcArea() {
		return 3.14 * radius * radius;

	}

};
int main2() {
	Circle pizza1, pizza2;
	pizza1.radius = 100;
	pizza1.color = "yellow";
	cout << "������ ����=" << pizza1.calcArea() << "\n";

	pizza2.radius = 200;
	pizza2.color = "white";
	cout << "������ ����=" << pizza2.calcArea() << "\n";
	return 0;
}