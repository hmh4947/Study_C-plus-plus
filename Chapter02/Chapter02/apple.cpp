#include <iostream>
using namespace std;
int main23() {
	const int SIZE = 10;
	int list[SIZE];
	int max,min, maxPerson, minPerson;

	for (int& e : list) {
		cout << "아침에 먹는 사과의 개수: ";
		cin >> e;

	}
	cout << endl;
	max = list[0];
	min= list[0];
	maxPerson = 0;
	minPerson = 0;
	for (int i = 0; i < SIZE; i++) {
		if (list[i] > max) {
			max = list[i];
			maxPerson = i;
		}
		if (list[i] < min) {
			min = list[i];
			minPerson = i;
		}

	}


	cout << "가장 많이 사과를 먹은 사람번호= " << maxPerson << endl;
	cout << "가장 사과를 적게 먹은 사람번호= " << minPerson << endl;

	return 0;
}