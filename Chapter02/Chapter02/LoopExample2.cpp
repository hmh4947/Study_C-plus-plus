#include <iostream>
using namespace std;

int main10() {
	int n;
	int i = 1;

	cout << "������ �߿��� ����ϰ� ���� ���� �Է��Ͻÿ�: ";
	cin >> n;
	while (i <= 9) {
		cout << n << "*" << i << "=" << n * i << endl;
		i++;
	}
	return 0;

}