#include<iostream>
using namespace std;

class Sum {
public:
	int n1, n2;
	void init(int x,int y);
	int add();

};

void Sum::init(int x,int y)
{
	n1 = x;
	n2 = y;
}

int Sum::add()
{
	return n1 + n2;
}
int main3() {
	Sum mySum;
	mySum.init(10,20);
	cout << "ù ��° ����: " << mySum.n1 << endl;
	cout << "�� ��° ����: " << mySum.n2 << endl;
	cout<<"���� ���: "<<mySum.add()<<endl;
	return 0;
}
