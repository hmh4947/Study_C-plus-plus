#include<iostream>
#include<string>
#include<ctype.h>
#include<stdio.h>
using namespace std;

int main13() {
	string password;
	bool pw_isupeer=false;
	bool pw_islower = false;
	bool pw_num = false;
	cout << "��ȣ�� �Է��Ͻÿ�: ";
	getline(cin,password);
	for (int i = 0; i < password.length(); i++) {
		if (isupper(password[i])) { //�빮��
			pw_isupeer = true;
		}
		if (islower(password[i])) { //�ҹ���
			pw_islower = true;
		}
		if (isdigit(password[i])) { //����
			pw_num=true;
		}
	}
	if (pw_islower == true && pw_isupeer == true && pw_num == true) {
		cout << "�����մϴ�.";
	}
	else {
		cout << "�������� �ʽ��ϴ�.";
	}
	return 0;
}