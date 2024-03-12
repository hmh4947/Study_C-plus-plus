#include<iostream>
using namespace std;

class Person {
private:
	string name;
	int snumber;
	int age;
public:
	Person() {
		name = "";
		snumber = 0;
		age = 0;
	}
	Person(string name, int snum, int age) :
		name(name), snumber(snum), age(age) {}
	string getName();
	void setName(string name);
	int getSnumber();
	void setSnumber(int snum);
	int getAge();
	void setAge(int age);
	void print();
};

string Person::getName()
{
	return name;
}

void Person::setName(string name)
{
	name = name;
}

int Person::getSnumber()
{
	return snumber;
}

void Person::setSnumber(int snum)
{
	snumber = snum;
}

int Person::getAge()
{
	return age;
}

void Person::setAge(int age)
{
	age = age;
}

void Person::print()
{
	cout << "�̸�: " << name << endl;
	cout << "�ֹε�Ϲ�ȣ: " << snumber << endl;
	cout << "����: " << age << endl;
	
}
int main10() {
	Person p("ȫ�浿",123456, 20);
	p.print();
	return 0;
}
