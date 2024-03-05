#include<iostream>
using namespace std;
int prime(int n) {
	int check = 1;

	if (n > 2 && n % 2 == 0)
		return 0;
	for (int i = 2; i < n; i++) {
		
		if (n  % i == 0) {
			check = 0;
			break;
		}
		
		
	}
	return (check) ? 1 : 0;
}
int main4() {
	int i;
	for(i=2;i<=100;i++){
		if (prime(i)) {
			cout << i << " ";
		}

	}
	cout << endl;

	return 0;
}