#include<iostream>
#include<time.h>
using namespace std;

int main2() {
	srand(time(NULL));
	string user;
	try {
		cout << "가위, 바위, 보 게임입니다." << endl;
		cout << "무엇을 내시겠습니까: ";
		cin >> user;
		if (user != "가위" && user != "바위" && user != "보") {
			throw user;
		}
		int c = rand() % 3;
		if (c == 0) {
			cout << "computer: 가위" << endl;

		}
		if (c == 1) {
			cout << "computer: 바위" << endl;

		}
		if (c == 2) {
			cout << "computer: 보" << endl;

		}
		cout << "user: " << user;
	}
	catch (string e) {
		cout << "오류: \"가위\", \"바위\", \"보\" 중에서만 선택하세요." << endl;
	}
	return 0;

}