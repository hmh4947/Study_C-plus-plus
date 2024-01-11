//중간점검
#include <iostream>
using namespace std;

int main8() {
	int number;
	cout << "숫자를 입력하시오: ";
	cin >> number;
	switch (number) {
	case 1:
		cout << "사과";
		break;
	case 2:
		cout << "배";
		break;
	case 3:
		cout << "바나나";
		break;
	default:
		cout << "과일";
		break;
	}
	return 0;
}