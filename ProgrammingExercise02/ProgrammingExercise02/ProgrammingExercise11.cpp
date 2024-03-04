#include<iostream>

using namespace std;
int main11() {
	int n;
	int sum = 0;

	cout << "n의 값을 입력하시오: ";
	cin >> n;
	for (int i = 1; i < n + 1; i++) {
		sum += i * i;
		cout << "계산값은 " << sum << endl;
	}
	return 0;
}
	