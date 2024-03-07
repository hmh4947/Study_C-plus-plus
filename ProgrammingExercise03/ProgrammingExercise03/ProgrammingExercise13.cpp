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
	cout << "암호를 입력하시오: ";
	getline(cin,password);
	for (int i = 0; i < password.length(); i++) {
		if (isupper(password[i])) { //대문자
			pw_isupeer = true;
		}
		if (islower(password[i])) { //소문자
			pw_islower = true;
		}
		if (isdigit(password[i])) { //숫자
			pw_num=true;
		}
	}
	if (pw_islower == true && pw_isupeer == true && pw_num == true) {
		cout << "안전합니다.";
	}
	else {
		cout << "안전하지 않습니다.";
	}
	return 0;
}