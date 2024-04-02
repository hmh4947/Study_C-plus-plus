#include<iostream>
#include<string>
using namespace std;

class Employee {
	string name;
	int salary;
public:
	Employee(string n, int s) :name(n), salary(s) {}
	string getName() { return name; }
	int getSalary() { return salary; }
	void setName(string n) { name = n; }
	void setSalary(int s) { salary = s; }
	int computeSalary() {
		return salary;
	}
	void print() {
		cout << "�̸�: " << getName() << endl;
		cout << "����: " << getSalary() << endl;
	}
};
class Manager :public Employee {
	int bonus;
public:
	Manager(string n, int s, int b ) :Employee(n, s),bonus(b) {}
	int getBonus() { return bonus; }
	void setBonus(int b) { bonus = b; }
	int computeSalary() {
		return getSalary() + getBonus();
	}
	void print() {
		Employee::print();
		cout << "���ʽ�: " << getBonus() << endl;
		cout << "��ü �޿�: " << computeSalary() << endl;
	}
};
int main3() {
	Manager m("��ö��", 200, 100);
	m.print();
	return 0;
	
}