#include<iostream>
using namespace std;

int main5() {
	char secret_code = 'h';
	char code;

	cout << "����ڵ带 ���纸����: ";
	cin >> code;
	if (code < secret_code)
		cout << code << "�ڿ� ����" << endl;
	else if (code > secret_code)
		cout << code << "�տ� ����" << endl;
	else
		cout << "���߾����ϴ�." << endl;
	return 0;

}