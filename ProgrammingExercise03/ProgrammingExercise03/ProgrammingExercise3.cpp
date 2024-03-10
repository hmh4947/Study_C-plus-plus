#include<iostream>
using namespace std;
double hypot(double a, double b) {
	return sqrt(a + b);
}
int main3() {
	float a, b;
	cout << "직각삼각형의 한변: ";
	cin >> a;
	cout << "직각삼각형의 한변: ";
	cin >> b;
	cout << "빗변: " << hypot(a, b);
	return 0;
}