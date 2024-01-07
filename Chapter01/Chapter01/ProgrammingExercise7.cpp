#include<iostream>
#include<math.h>
using namespace std;

int main13() {
	const double pi = 3.14;
	double r;
	double a;
	double v;

	
	cout << "반지름: ";
	cin >> r;
	
	a= 4 * pi * pow(r, 2);//표면적
	v= 4 / 3 * pi * pow(r, 3);

	cout << "표면적: " << a << endl;
	cout << "부피: " << v << endl;

	return 0;
}
