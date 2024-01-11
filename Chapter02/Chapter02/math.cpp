#include<iostream>
#include<stdlib.h>
using namespace std;

int main19() {
	int i, ans;
	cout << "산수 문제를 자동으로 출제합니다.";	
	
	while (true) {
		int x = rand() % 100;
		int y = rand() % 100;
		int n = rand() % 4;
		switch (n)
		{
		case 0:
			cout << x << "+" << y << "=";
			cin >> ans;
			if (x + y == ans) {
				i = 0;

				break;
			}
			else {
				i = 1;;
			}
			break;
		case 1:
			cout << x << "-" << y << "=";
			cin >> ans;
			if (x - y == ans) {
				i=0;

				break;
			}
			else {
				i=1;
			}
			break;
		case 2:
			cout << x << "*" << y << "=";
			cin >> ans;
			if (x * y == ans) {
				i=0;

				break;
			}
			else {
				i=1;
			}
			break;
		case 3:
			cout << x << "/" << y << "=";
			cin >> ans;
			if (x / y == ans) {
				i=0;

				break;
			}

			else {
				i=1;
			}
			break;
		}
		
		if (i==0) {
			cout << "맞았습니다." << endl;

			break;
		}
		if(i==1){
			cout << "틀렸습니다." << endl;
		}
	}
	return 0;
}