#include<iostream>
using namespace std;
int main18() {
	float choice, length, width;
	float area;
	float r;
	float a, h;
	cout << "������ �����ϼ���(1,2,3): ";
	cin >> choice;
	if (choice == 1) {
		cout << "����: ";
		cin >> length;
		cout << "����: ";
		cin >> width;
		area = length * width;
		cout << "����: " << area << endl;


	}
	else if (choice == 2) {
		cout << "������: ";
		cin >> r;
		area = 3.14 * r * r;
		cout << "����: " << area << endl;
	}
	else if (choice == 3) {
		cout << "�غ�: ";
		cin >> a;
		cout << "����: ";
		cin >> h;
		area = a * h / 2;
		cout << "����: " << area << endl;
	}
	else
		cout << "�ùٸ� �Է��� �ƴմϴ�.";
	return 0;
}