#include<iostream>
#include<stdlib.h> //rand(),srand()
#include<ctime> //time()
using namespace std;

int main16() {
	
	int bets=0; //���� Ƚ��
	int cash=50; //�ʱ� �ݾ�
	int winCount=0; //�̱� Ƚ��
	double avg_bets; //��� ���� Ƚ��

	srand(time(NULL));
	while (true) {
		
		bets++;
		if (rand()%2) {
			cash++;//1�޷��� ����
			if (bets <= 1000) { //���� 1000���ɶ����� �̱� Ƚ��
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
	cout << "�ʱ� �ݾ�: $50 " << endl;
	
	cout << "��ǥ �ݾ�: $250"<<endl;
	cout << "1000 ���� " << winCount << "�� �¸�" << endl;
	cout << "�̱� Ȯ��= " << (double)winCount/10.0<< endl;
	cout << "��� ���� Ƚ�� = "<< (double)bets/1.0<< endl;
	return 0;
}