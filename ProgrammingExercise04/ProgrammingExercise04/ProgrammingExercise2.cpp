#include<iostream>
using namespace std;
class Computer {
public:
	string name;
	int RAM;

	double cpu_speed;
	void setComputer(string myName, int myRAM, double myCpu_speed);
	void print();
};



void Computer::setComputer(string myName, int myRAM, double myCpu_speed)
{
	name = myName;
	RAM = myRAM;
	cpu_speed = myCpu_speed;

}

void Computer::print()
{
	cout << "�̸�: " << name << endl;
	cout << "RAM: " << RAM << endl;
	cout << "CPU �ӵ�: " << cpu_speed << endl;
	

}
int main2() {
	Computer myComputer;
	myComputer.setComputer("���ǽ���ǻ��", 8, 4.2);
	myComputer.print();
	return 0;
}
