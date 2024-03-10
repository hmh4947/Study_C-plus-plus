#include<iostream>
#include<stdlib.h>	//abs함수(int형)
#include<cmath>	//fabs함수(double형)
using namespace std;


void print(int i) {
	cout << "정수 출력: " << i << endl;

}
void print(double i) {
	cout << "실수 출력: " << i << endl;
}
void print(char i) {
	cout << "문자 출력: " << i << endl;
}
int absolute(int i) {
	int result;
	result = abs(i);
	//result = (i > 0) ? i : -i;
	cout << "절대값 정수 출력: " << result << endl;
	return result;
}
double absolute(double i) {
	double result;
	result = fabs(i);
	//result = (i > 0.) ? i : -i;
	cout << "절대값 실수 출력: " << result << endl;
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