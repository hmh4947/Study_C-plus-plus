#include<iostream>
#include<string>
using namespace std;

int main4() {

	int money;
	int candy_price;
	
	cout << "���� ������ �ִ� ��: ";
	cin >> money;
	cout << "ĵ���� ����:";
	cin >> candy_price;
	cout << "�ִ�� �� �� �ִ� ĵ���� ����=" << money / candy_price << endl;
	cout << "ĵ�� ���� �� ���� ��=" << money % candy_price;

	return 0;


}
