#include<iostream>
using namespace std;

class Parent {
public:
	virtual ~Parent() { cout << "Parent �Ҹ���" << endl; }

};
class Child : public Parent {
public:
	~Child() { cout << "Child �Ҹ���" << endl; }



};
int main7() {
	Parent* p = new Child(); //���� ����ȯ
	delete p;
	return 0;
}