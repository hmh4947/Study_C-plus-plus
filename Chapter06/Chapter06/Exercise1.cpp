#include <iostream>
using namespace std;

class Test {
	int x;
public:
	Test() { x = 0; cout << x << " "; }
	Test(int x) :x(x) {}
	void print() {
		cout << x << " ";
	}
};
int main13() {
	
	Test b[2] = { Test(1),Test(2) };
	for (auto& test : b) {
		test.print();
	}
	return 0;
}