#include <iostream>
using namespace std;

int maximum(int x, int y, int z) {
	if (x >= y && x >= z) {
		return x;
	}
	if (y >= x && y >= z) {
		return y;
	}
	else {
		return z;
	}
}
int main1()
{
	int n1, n2, n3;
	cout << "3개의 정수를 입력하시오: ";
	cin >> n1 >> n2 >> n3;
	cout << "가장 큰 정수는 " << maximum(n1, n2, n3);
	return 0;
}
