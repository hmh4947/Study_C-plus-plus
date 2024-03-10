#include<iostream>

using namespace std;
int main4() {
	int num[5];
	for (int i = 0; i < 5; ++i) {
		cout << "정수를 입력하세요: ";
		cin >> num[i];
	}

	if (num[0] == 5 || num[1] == 5|| num[2] == 5|| num[3] == 5|| num[4]== 5) {
		
		cout << "5를 입력하였군요! 컴퓨터 승" << endl;
	}
	else {

		cout << "인내심이 강합니다. 사용자 승" << endl;
	}
	return 0;	
}
