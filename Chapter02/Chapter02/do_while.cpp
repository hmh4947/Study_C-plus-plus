#include <iostream>
#include <string>
using namespace std;

int main11() {
	string str;
	do {
		cout << "���ڿ��� �Է��Ͻÿ�: ";
		getline(cin, str);
		cout << "������� �Է�: " << str << endl;

	} while (str != "����");
	return 0;
}

