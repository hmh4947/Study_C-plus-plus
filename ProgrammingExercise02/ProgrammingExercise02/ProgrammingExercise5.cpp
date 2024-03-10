#include<iostream>
#include<string>
using namespace std;
int main5() {
	
	int i = 0;
	int k;
	do {
		cout << "정수를 입력하시오: ";
		cin >> k;
		i= i+k;
		
	} while (k != 0);
	cout << "합계=" << i;
	return 0;
}