#include<iostream>

using namespace std;
int main13() {
	int n;
	int a=0,b=1,c;

	cout << "몇 항까지 구할까요: ";
	cin >> n;

	cout << a << " " << b<<" ";

	for (int i = 3; i <= n; i++) {
	
		c = a + b;
		a = b;
		b = c;
		
		cout << c << " ";
	}
	return 0;
}