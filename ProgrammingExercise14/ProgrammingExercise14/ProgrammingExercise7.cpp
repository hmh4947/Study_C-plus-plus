#include<iostream>
using namespace std;

template <typename T>

class Circle {
	T x, y, radius;
public:
	Circle(T x, T y, T r) :x (x),y(y),radius(r) {}
	T area() {
		return radius* radius * 3.14;
	
	}
};
int main() {
	Circle<double> circleA(0.0, 0.0, 10.0);
	cout << "¸éÀû: " << circleA.area() << endl;
	return 0;
}