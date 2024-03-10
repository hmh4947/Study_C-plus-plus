#include<iostream>

using namespace std;

class Employee {
public:
	string name;
	int age;
	int salary;
	void init(string myName, int myAge, int pay);
	void print();


};


void Employee::init(string myName, int myAge, int pay)
{
	name = myName;
	age = myAge;
	salary = pay;
}

void Employee::print()
{
	cout << name << endl;
	cout << age << endl;
	cout << salary << endl;
}

int main6() {

	Employee Employee1;
	cout << "Employee1: " << endl;
	Employee1.init("±èÃ¶¼ö", 38, 2000000);
	Employee1.print();

	return 0;
}