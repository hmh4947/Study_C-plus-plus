//�߰�����
#include <iostream>
using namespace std;

int main8() {
	int number;
	cout << "���ڸ� �Է��Ͻÿ�: ";
	cin >> number;
	switch (number) {
	case 1:
		cout << "���";
		break;
	case 2:
		cout << "��";
		break;
	case 3:
		cout << "�ٳ���";
		break;
	default:
		cout << "����";
		break;
	}
	return 0;
}