#include<iostream>
#include<string>
using namespace std;

int main11() {
	string str;
	cout << "문자열을 입력하시오: ";
	getline(cin, str);

	str[0] = (toupper(str[0]));
	if (str.size() - 1 != '.') {
		str=str + '.';
	}
	cout << "결과 문자열: " << str;
	return 0;

}