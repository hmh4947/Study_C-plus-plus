#include <iostream>
using namespace std;

double calc_volume(double radius=10.0) {
	return (4.0 / 3.0 * 3.14 * pow(radius, 3));
}
int main2() {
	float r;
	cout << "�������� �Է��Ͻÿ�: ";
	cin >> r;
	cout << "���� ���Ǵ� " << calc_volume(r);
	return 0;
}