#include<iostream>
using namespace std;

class SuperA {
public:
	int x;
	void sub() {
		cout << "SuperA�� sub()" << endl;

	}
};
class SuperB {
public:
	int x;
	void sub() {
		cout << "SuperB�� sub()" << endl;

	}
};
class Sub :public SuperA, public SuperB {

};
int main12() {
	Sub obj;
	obj.SuperA::x = 10; //x�� SuperA�� x�� �ǹ�
	return 0;
}