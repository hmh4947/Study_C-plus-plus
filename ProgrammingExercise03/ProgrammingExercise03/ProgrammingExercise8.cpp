#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int main8() {
	srand(time(NULL));

	int rand_num[10] = { 0 };
	int max;
	int maxi=0;
	int i;

	max = rand_num[0];

	for(i = 0; i < 100; i++) {
		rand_num[rand() % 10]++; //생성된 난수에 해당하는 인덱스의 요소를 증가
	}
	

	for (i = 1; i < 10; i++) {
		if (max<rand_num[i]) {
			max = rand_num[i];
			maxi = i;

		}
	}
	for (i = 0; i < 10; i++) {
		cout <<"   "<< i;

	}
	cout << endl;
	for (i = 0; i < 10; i++) {
		cout << "   "<<rand_num[i];

	}
	cout << endl;
	cout << "가장 많이 생성된 수: " << maxi << endl;
	return 0;

}