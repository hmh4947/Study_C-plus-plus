#include <iostream>
using namespace std;
int main23() {
	const int SIZE = 10;
	int list[SIZE];
	int max,min, maxPerson, minPerson;

	for (int& e : list) {
		cout << "��ħ�� �Դ� ����� ����: ";
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


	cout << "���� ���� ����� ���� �����ȣ= " << maxPerson << endl;
	cout << "���� ����� ���� ���� �����ȣ= " << minPerson << endl;

	return 0;
}