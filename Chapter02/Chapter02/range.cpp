#include <iostream>
#include <stdlib.h>
using namespace std;
int main22() {

	int list[100];
	int max;
	for (auto& e : list)//난수 생성
	{
		e = rand() % 100 + 1;
		cout << e << " ";
	}
	cout << endl;
	max = list[0];

	for (auto& e : list) {
		if (e > max) {
			max = e;
		}
	}
	cout << "최대값= " << max << endl;
	return 0;
}