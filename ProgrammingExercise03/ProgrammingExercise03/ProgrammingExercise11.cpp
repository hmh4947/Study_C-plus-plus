#include<iostream>
#include<string>
using namespace std;

int main11() {
	string str;
	cout << "���ڿ��� �Է��Ͻÿ�: ";
	getline(cin, str);

	str[0] = (toupper(str[0]));
	if (str.size() - 1 != '.') {
		str=str + '.';
	}
	cout << "��� ���ڿ�: " << str;
	return 0;

}