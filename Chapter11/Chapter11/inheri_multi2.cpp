#include<iostream>
using namespace std;

class SuperA {
public:
	int x;
	void sub() {
		cout << "SuperA의 sub()" << endl;

	}
};
class SuperB {
public:
	int x;
	void sub() {
		cout << "SuperB의 sub()" << endl;

	}
};
class Sub :public SuperA, public SuperB {

};
int main12() {
	Sub obj;
	obj.SuperA::x = 10; //x는 SuperA의 x를 의미
	return 0;
}