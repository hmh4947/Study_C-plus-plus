#include <iostream>
using namespace std;

//�������� �����ϴ� �Լ�
int square(int i) {

	cout << "square(int) ȣ��" << endl;
	return i * i;
}
//�Ǽ����� �����ϴ� �Լ�
int square(double i) {

	cout << "square(double) ȣ��" << endl;
	return i * i;
}
int main3() {
	cout << square(10) << endl;
	cout << square(2.0) << endl;
	return 0;
}
