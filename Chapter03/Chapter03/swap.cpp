#include<stdio.h>
using namespace std;

void swap(int& x, int& y) {
	int tmp;

	tmp = x;
	x = y;
	y = tmp;

}
int main2() {
	int a = 100, b = 200;
	printf("a=%d b=%d\n", a, b);
	swap(a, b);
	printf("a=%d b=%d\n", a, b);
	return 0;
}