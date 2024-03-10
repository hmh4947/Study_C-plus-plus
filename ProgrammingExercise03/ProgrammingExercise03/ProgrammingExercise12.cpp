#include<iostream>
#include<string>
using namespace std;

int main12() {
	int counter[256] = { 0 };
	string s;
	int i;
	cout << "문자열을 입력하시오: ";
	getline(cin,s);

	for ( i = 0; i < s.size(); i++) {
		counter[s[i]]++;
	}
	for (i = 0; i < 256; i++) {
		if (counter[i] != 0) {
			cout << char(i) << " : " << counter[i] << endl;
		}
	}

	return 0;
}