#include<iostream>
using namespace std;
double hypot(double a, double b) {
	return sqrt(a + b);
}
int main3() {
	float a, b;
	cout << "�����ﰢ���� �Ѻ�: ";
	cin >> a;
	cout << "�����ﰢ���� �Ѻ�: ";
	cin >> b;
	cout << "����: " << hypot(a, b);
	return 0;
}