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
	
	cout << "������� �ֻ���: " << dice1 << "+" << dice2 << "="<<result <<endl;
	if (result == 7 || result == 11) {
		cout << "����ڰ� �̰���ϴ�.";
	}
	if (result == 2 || result == 3 || result == 12) {
		cout << "����ڰ� �����ϴ�.";
	}
	return 0;
}