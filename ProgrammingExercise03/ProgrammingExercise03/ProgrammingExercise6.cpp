#include<iostream>
#include<string>
using namespace std;

int main6() {
	string num;
	while (true) {
		
		
		cout << "��ȭ��ȣ�� �Է��Ͻÿ�: ";
		cin >> num;

		if (num.compare("quit") == 0) {
			break;
		}
		for (auto& c : num) {
			if (c == '(' || c == ')')continue;
			else cout << c;
		}
		cout << endl;
	}
	return 0;
}