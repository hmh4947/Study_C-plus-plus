#include<iostream>
#include<string>
using namespace std;

int main10() {
	string s;
	cout << "�ֹε�Ϲ�ȣ�� �Է��Ͻÿ�: ";
	cin >> s;

	cout << "-�� ���ŵ� �ֹε�Ϲ�ȣ: ";
	for (auto& c : s) {
		if (c == '-') continue;
		cout << c;

	}
	cout << endl;
	return 0;

}