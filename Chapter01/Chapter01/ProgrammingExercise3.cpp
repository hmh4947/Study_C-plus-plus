#include<iostream>
#include<math.h>
using namespace std;

int main9() {
	float a;
	float b;
	float c;

	cout << "ù ��° ��: ";
	cin >> a;
	cout << "�� ��° ��: ";
	cin >> b;
	
	c = sqrt(pow(a, 2) + pow(b, 2));
	cout << "���� ����: " << c;
	return 0;
}