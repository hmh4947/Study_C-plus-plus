#include<iostream>


using namespace std;
int main3() {

	int day[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	for (int i = 7; i < 13; i++) {
		cout << i << "���� " << day[i-1] << "�ϱ��� �ֽ��ϴ�" << endl;
		
	}
	return 0;
}