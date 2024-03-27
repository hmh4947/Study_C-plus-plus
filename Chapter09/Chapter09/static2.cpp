#include<iostream>
#include<string>
using namespace std;

class Circle2 {
	int x, y;
	int radius;
public:
	static int count; //정적 변수
	Circle2() :x(0), y(0), radius(0) {
		count++;

	}
	Circle2(int x, int y, int r) :x(x), y(y), radius(r) {
		count++;

	}
	//정적 멤버 함수
	static int getCount() {
		return count;
	}
};
int Circle2::count = 0; 

int main6() {
	Circle2 c1;
	cout << "지금까지 생성된 원의 개수 = " << Circle2::getCount() << endl;
	Circle2 c2;
	cout << "지금까지 생성된 원의 개수 = " << Circle2::getCount() << endl;

	return 0;
}