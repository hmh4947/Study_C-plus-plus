#include<iostream>
#include<string>
#include<map>
using namespace std;

int main12() {
	map<string, int> table;
	string s;

	cout << "������ �Է��Ͻÿ�(����� Ctrl-z): ";
	while (true) {
		cin >> s;
		table[s]++;
		if (cin.eof()) break;

	}
	for (auto iter=table.begin(); iter != table.end(); iter++) {
		cout << iter->first << " : " << iter->second << endl;
	}
	return 0;
}