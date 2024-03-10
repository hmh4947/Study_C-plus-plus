#include<iostream>
using namespace std;
int main18() {
	float choice, length, width;
	float area;
	float r;
	float a, h;
	cout << "도형을 선택하세요(1,2,3): ";
	cin >> choice;
	if (choice == 1) {
		cout << "가로: ";
		cin >> length;
		cout << "세로: ";
		cin >> width;
		area = length * width;
		cout << "면적: " << area << endl;


	}
	else if (choice == 2) {
		cout << "반지름: ";
		cin >> r;
		area = 3.14 * r * r;
		cout << "면적: " << area << endl;
	}
	else if (choice == 3) {
		cout << "밑변: ";
		cin >> a;
		cout << "높이: ";
		cin >> h;
		area = a * h / 2;
		cout << "면적: " << area << endl;
	}
	else
		cout << "올바른 입력이 아닙니다.";
	return 0;
}