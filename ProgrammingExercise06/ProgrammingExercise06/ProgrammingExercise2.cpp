#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main2() {
	int s;
	string str;

	cout << "문자열의 개수: ";
	cin >> s;

	vector<string> v;
	for (int i = 0; i < s; i++) {
		cout << "문자열의 입력하시오: ";
		cin >> str;
		v.push_back(str);
	
	}
	sort(v.begin(), v.end());

	for (auto& str : v) {
		cout << str<< endl;

	}

	return 0;

}