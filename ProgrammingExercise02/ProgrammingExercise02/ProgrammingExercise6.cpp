#include<iostream>

using namespace std;

int main6() {
	for(int j=2; j<9;j++){
		for (int i = 1; i < j; i++) {
			cout << i;
		}
		for (int k = 8; k > j; k--) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}