#include <iostream>
using namespace std;
int main24() {
	const int SIZE = 10;
	int list[SIZE];
	int temp;
	for (int i = 0; i < SIZE; i++) {
		cout << "��ħ�� �Դ� ����� ����: ";
		cin >> list[i];

	}
	cout << endl;


	for (int i = 0; i < SIZE - 1; i++) {
		for (int j = 0; j < SIZE - i - 1; j++) {
			if (list[j] > list[j + 1]) {
				temp = list[j];
				list[j] = list[j + 1];
				list[j+1] = temp;
			
			}
		}
	}

	
	cout << "���� ����� ���� ��= ";
	for (int i = 0; i < SIZE; i++) {
		cout << list[i]<<" ";
	}
	cout << endl;
	return 0;
}