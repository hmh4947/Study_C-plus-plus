#include<iostream>
using namespace std;
int main14() {
	char oper;
	int num1,num2;
	cout << "������ ����: ";
	cin >> oper;

	cout << "���ڸ� �Է��Ͻÿ�: ";
	cin >> num1>>num2;

	switch (oper)
	{
	case '+':
		cout << "����� ���: " << num1 + num2 << endl;
		break;
	case '-':
		cout << "����� ���: " << num1 - num2 << endl;
		break;
	case '*':
		cout << "����� ���: " << num1 * num2 << endl;
		break;
	case '/':
		if (num2 != 0) {
			cout << "����� ���: " << num1 / num2 << endl;
		}
		else {
			cout << "�ٽ��Է����ּ���";
		}
		break;

	}



	return 0;
}