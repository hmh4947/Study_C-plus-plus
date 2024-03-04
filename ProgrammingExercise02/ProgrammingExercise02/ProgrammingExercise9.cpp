#include<iostream>

using namespace std;
int main9() {
	float c;
	for (int i = 0; i < 100; i += 10) {
		c = (i- 32.0) * 5.0 / 9.0;
		cout <<i<<"     "<< c << endl;
	}
	return 0;
}