#include<iostream>
using namespace std;

int main12() {
	int h;
	int m;
	int s;
	cout << "시: ";
	cin >> h;
	cout << "분: ";
	cin >> m;
	cout << "초: ";
	cin >> s;

	cout << "전체 초: " <<3600*h+60*m+s;
	return 0;
}