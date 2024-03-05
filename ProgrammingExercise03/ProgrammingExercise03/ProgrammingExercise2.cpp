#include <iostream>
using namespace std;

double calc_volume(double radius=10.0) {
	return (4.0 / 3.0 * 3.14 * pow(radius, 3));
}
int main2() {
	float r;
	cout << "반지름을 입력하시오: ";
	cin >> r;
	cout << "구의 부피는 " << calc_volume(r);
	return 0;
}