#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main9() {
	int num1;
	int num2;

	srand(time(NULL));
	int dice1 = rand() % 6+1;
	int dice2 = rand() % 6+1;
	int result = dice1 + dice2;
	
	cout << "사용자의 주사위: " << dice1 << "+" << dice2 << "="<<result <<endl;
	if (result == 7 || result == 11) {
		cout << "사용자가 이겼습니다.";
	}
	if (result == 2 || result == 3 || result == 12) {
		cout << "사용자가 졌습니다.";
	}
	return 0;
}