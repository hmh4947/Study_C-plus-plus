#include<iostream>
#include<iomanip>

using namespace std;
int main10() {
	int a,b,c;
	for (int a = 1; a < 100; a++)
	{
		for (int b = 1; b < 100; b++) {
			for (int c = 1; c < 100; c++) {
				if (pow(c,2) == pow(a, 2) + pow(b, 2))
				{
					cout << a <<setw(3) << b << setw(3) << c << endl;
				}
			}
		}
	}
	return 0;
}