#include<iostream>

using namespace std;
int main11() {
	int n;
	int sum = 0;

	cout << "n�� ���� �Է��Ͻÿ�: ";
	cin >> n;
	for (int i = 1; i < n + 1; i++) {
		sum += i * i;
		cout << "��갪�� " << sum << endl;
	}
	return 0;
}
	