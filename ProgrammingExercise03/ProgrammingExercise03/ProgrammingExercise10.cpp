#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int flip() {

	return rand() % 2;
	
}
int main10() {
	srand(time(NULL));
	int i;
	int count_f = 0;
	int count_b = 0;
	for (i = 0; i < 100; i++) {
		int coin = flip();
		if (coin == 0) {
			count_f++;
		}
		else {
			count_b++;
		}
	}
	cout << "������ �ո�: " << count_f << endl;
	cout << "������ �޸�: " << count_b << endl;

	return 0;
}