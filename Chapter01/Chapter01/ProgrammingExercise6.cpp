#include<iostream>
using namespace std;

int main12() {
	int h;
	int m;
	int s;
	cout << "��: ";
	cin >> h;
	cout << "��: ";
	cin >> m;
	cout << "��: ";
	cin >> s;

	cout << "��ü ��: " <<3600*h+60*m+s;
	return 0;
}