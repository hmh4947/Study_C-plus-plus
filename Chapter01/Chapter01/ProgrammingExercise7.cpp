#include<iostream>
#include<math.h>
using namespace std;

int main13() {
	const double pi = 3.14;
	double r;
	double a;
	double v;

	
	cout << "������: ";
	cin >> r;
	
	a= 4 * pi * pow(r, 2);//ǥ����
	v= 4 / 3 * pi * pow(r, 3);

	cout << "ǥ����: " << a << endl;
	cout << "����: " << v << endl;

	return 0;
}
