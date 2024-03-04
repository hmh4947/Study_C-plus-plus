#include<iostream>
#include<stdlib.h> //rand(),srand()
#include<ctime> //time()
using namespace std;

int main16() {
	
	int bets=0; //배팅 횟수
	int cash=50; //초기 금액
	int winCount=0; //이긴 횟수
	double avg_bets; //평균 배팅 횟수

	srand(time(NULL));
	while (true) {
		
		bets++;
		if (rand()%2) {
			cash++;//1달러를 딴다
			if (bets <= 1000) { //배팅 1000번될때까지 이긴 횟수
				winCount++;
			}
		}
		else {
			cash--;
		}
		if ( cash<=0||cash>=250) {
			break;
		}
		
	}
	cout << "초기 금액: $50 " << endl;
	
	cout << "목표 금액: $250"<<endl;
	cout << "1000 중의 " << winCount << "번 승리" << endl;
	cout << "이긴 확률= " << (double)winCount/10.0<< endl;
	cout << "평균 배팅 횟수 = "<< (double)bets/1.0<< endl;
	return 0;
}