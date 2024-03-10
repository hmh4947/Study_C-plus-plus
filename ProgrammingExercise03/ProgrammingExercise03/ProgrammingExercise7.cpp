#include<iostream>
#include<string>
using namespace std;

int main7() {
	string str[5];
	int i;
	int max;
	int maxi = 0;
	for (i = 0; i < 5; i++) {
		cout << "문자열을 입력하시오:: ";
		cin >> str[i];
	}
	max = str[0].size();
	for (i = 0; i < 5; i++) {
		if (max < str[i].size()) {
			max = str[i].size();
			maxi = i;
		}
	}
	cout << "제일 긴 문자열: " << str[maxi];
	return 0;
}