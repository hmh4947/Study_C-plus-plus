#include<iostream>
using namespace std;

int main10() {
	int l;
	int w;
	int h;
	cout << "����: ";
	cin >> l;
	cout << "�ʺ�: ";
	cin >> w;
	cout << "����: ";
	cin >> h;

	cout << "������ ����: " << l * w * h << endl;
	cout << "������ ǥ����; " << 2 * ((l * w) + (l * h) + (h * w));
	return 0;
}
