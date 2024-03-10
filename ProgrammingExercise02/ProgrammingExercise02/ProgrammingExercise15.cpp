#include<iostream>
#include<stdlib.h> //rand(),srand()
#include<ctime> //time()
using namespace std;
int main15() {
	
	int p_num;
	int c_num;
	int win=0;
	
	srand(time(NULL)); // 매 실행시마다 다른 값 출력 
	c_num = rand()%3+1; //1~3 사이의 난수 생성

	cout << "가위, 바위, 보 중에 하나를 선택하시오(1, 2, 3): ";
	cin >> p_num;
	
	cout << "컴퓨터: " << c_num << endl;


	if (p_num == 1) {// 플레이어: 가위

		if (c_num == 1) { //컴퓨터: 가위
			win = 3;
		}
		if (c_num == 2) { //컴퓨터: 바위
			win = 2;
		}
		
		if (c_num == 3) { //컴퓨터: 보
			win = 1;
		}
	}
	if (p_num == 2) {// 플레이어: 바위
		if (c_num == 1) { //컴퓨터: 가위
			win = 1;
		}
		if (c_num == 2) { //컴퓨터: 바위
		
			win = 3;
		}
		if (c_num == 3) { //컴퓨터: 보

			win = 2;
		}
		
	}
	if (p_num == 3) {// 플레이어: 보
		if (c_num == 1) { //컴퓨터: 가위

			win = 2;
		}

		if (c_num == 2) { //컴퓨터: 바위
			win = 1;
		}
		if (c_num == 3) { //컴퓨터: 보

			win = 3;
		}
	}


	if (win == 1) {
		cout << "플레이어 승!";
	}
	if(win==2){
		cout<< "컴퓨터 승!";
		
	}
	if (win == 3) {
		cout << "비겼습니다!";

	}
	
	return 0;
}