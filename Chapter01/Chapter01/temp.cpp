#include<iostream>
#include<string>
using namespace std;

int main5() {
	double c_temp;
	double f_temp;
	cout << "ȭ���µ��� �Է��ϼ���: ";
	cin >> f_temp;
	c_temp = (5.0 / 9.0) * (f_temp - 32);
	cout << "ȭ���µ� " << f_temp << "���� �����µ� " << c_temp << "�Դϴ�."<<endl;

	cout << "�����µ��� �Է��ϼ���: ";
	cin >> c_temp;
	c_temp = (5.0 / 9.0) * (f_temp - 32);
	cout << "�����µ� " << c_temp << "���� ȭ���µ� " << f_temp << "�Դϴ�.";

	return 0;
}