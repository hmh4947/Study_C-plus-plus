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
	cout << "이름: " << name << endl;
	cout << "RAM: " << RAM << endl;
	cout << "CPU 속도: " << cpu_speed << endl;
	

}
int main2() {
	Computer myComputer;
	myComputer.setComputer("오피스컴퓨터", 8, 4.2);
	myComputer.print();
	return 0;
}
