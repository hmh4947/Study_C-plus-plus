#include<iostream>
#include<time.h>
using namespace std;

int main2() {
	srand(time(NULL));
	string user;
	try {
		cout << "����, ����, �� �����Դϴ�." << endl;
		cout << "������ ���ðڽ��ϱ�: ";
		cin >> user;
		if (user != "����" && user != "����" && user != "��") {
			throw user;
		}
		int c = rand() % 3;
		if (c == 0) {
			cout << "computer: ����" << endl;

		}
		if (c == 1) {
			cout << "computer: ����" << endl;

		}
		if (c == 2) {
			cout << "computer: ��" << endl;

		}
		cout << "user: " << user;
	}
	catch (string e) {
		cout << "����: \"����\", \"����\", \"��\" �߿����� �����ϼ���." << endl;
	}
	return 0;

}