#include<iostream>
#include<math.h>
using namespace std;

int main9() {
	float a;
	float b;
	float c;

	cout << "첫 번째 변: ";
	cin >> a;
	cout << "두 번째 변: ";
	cin >> b;
	
	c = sqrt(pow(a, 2) + pow(b, 2));
	cout << "빗변 길이: " << c;
	return 0;
}