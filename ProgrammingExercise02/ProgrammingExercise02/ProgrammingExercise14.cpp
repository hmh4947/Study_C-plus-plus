#include<iostream>
using namespace std;
int main14() {
	char oper;
	int num1,num2;
	cout << "연산의 종류: ";
	cin >> oper;

	cout << "숫자를 입력하시오: ";
	cin >> num1>>num2;

	switch (oper)
	{
	case '+':
		cout << "계산의 결과: " << num1 + num2 << endl;
		break;
	case '-':
		cout << "계산의 결과: " << num1 - num2 << endl;
		break;
	case '*':
		cout << "계산의 결과: " << num1 * num2 << endl;
		break;
	case '/':
		if (num2 != 0) {
			cout << "계산의 결과: " << num1 / num2 << endl;
		}
		else {
			cout << "다시입력해주세요";
		}
		break;

	}



	return 0;
}