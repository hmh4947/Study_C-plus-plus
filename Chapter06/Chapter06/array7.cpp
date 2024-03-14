#include<iostream>
#include<vector>
using namespace std;

class Test {
	int x;
public:
	Test() { x = 0; cout << x << " "; }
	Test(int x) :x{ x } {}

};
int main() {
	Test b[2] = { Test(1),Test(2) };
	return 0;
}