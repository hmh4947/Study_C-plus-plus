#include<iostream>
#include<string>
using namespace std;

class Circle2 {
	int x, y;
	int radius;
public:
	static int count; //���� ����
	Circle2() :x(0), y(0), radius(0) {
		count++;

	}
	Circle2(int x, int y, int r) :x(x), y(y), radius(r) {
		count++;

	}
	//���� ��� �Լ�
	static int getCount() {
		return count;
	}
};
int Circle2::count = 0; 

int main6() {
	Circle2 c1;
	cout << "���ݱ��� ������ ���� ���� = " << Circle2::getCount() << endl;
	Circle2 c2;
	cout << "���ݱ��� ������ ���� ���� = " << Circle2::getCount() << endl;

	return 0;
}