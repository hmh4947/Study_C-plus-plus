#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main2() {
	int s;
	string str;

	cout << "���ڿ��� ����: ";
	cin >> s;

	vector<string> v;
	for (int i = 0; i < s; i++) {
		cout << "���ڿ��� �Է��Ͻÿ�: ";
		cin >> str;
		v.push_back(str);
	
	}
	sort(v.begin(), v.end());

	for (auto& str : v) {
		cout << str<< endl;

	}

	return 0;

}