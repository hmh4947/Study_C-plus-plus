#include<iostream>
#include<string>
using namespace std;

int main7() {
	string str[5];
	int i;
	int max;
	int maxi = 0;
	for (i = 0; i < 5; i++) {
		cout << "���ڿ��� �Է��Ͻÿ�:: ";
		cin >> str[i];
	}
	max = str[0].size();
	for (i = 0; i < 5; i++) {
		if (max < str[i].size()) {
			max = str[i].size();
			maxi = i;
		}
	}
	cout << "���� �� ���ڿ�: " << str[maxi];
	return 0;
}