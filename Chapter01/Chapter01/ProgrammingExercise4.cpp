#include<iostream>
using namespace std;

int main10() {
	int l;
	int w;
	int h;
	cout << "길이: ";
	cin >> l;
	cout << "너비: ";
	cin >> w;
	cout << "높이: ";
	cin >> h;

	cout << "상자의 부피: " << l * w * h << endl;
	cout << "상자의 표면적; " << 2 * ((l * w) + (l * h) + (h * w));
	return 0;
}
