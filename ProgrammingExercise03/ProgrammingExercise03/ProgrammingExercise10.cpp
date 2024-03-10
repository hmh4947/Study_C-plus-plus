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
	cout << "동전의 앞면: " << count_f << endl;
	cout << "동전의 뒷면: " << count_b << endl;

	return 0;
}