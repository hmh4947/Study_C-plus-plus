#include<iostream>
#include<stdlib.h>	//abs�Լ�(int��)
#include<cmath>	//fabs�Լ�(double��)
using namespace std;


void print(int i) {
	cout << "���� ���: " << i << endl;

}
void print(double i) {
	cout << "�Ǽ� ���: " << i << endl;
}
void print(char i) {
	cout << "���� ���: " << i << endl;
}
int absolute(int i) {
	int result;
	result = abs(i);
	//result = (i > 0) ? i : -i;
	cout << "���밪 ���� ���: " << result << endl;
	return result;
}
double absolute(double i) {
	double result;
	result = fabs(i);
	//result = (i > 0.) ? i : -i;
	cout << "���밪 �Ǽ� ���: " << result << endl;
	return result;
}
int main4() {
	print(100);
	print(3.14);
	print('C');
	absolute(-2);
	absolute(-1.0);
	return 0;
}