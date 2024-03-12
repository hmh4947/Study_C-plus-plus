#include<iostream>
using namespace std;

class Dog {
private:
	string name;
	string bread;
	int age;
public:
	Dog(string n, int a):
	name(n),age(a){}
	Dog(string n,string b, int a):name(n),bread(b),age(a){}
	string getName();
	void setName(string n);
	string getBread();
	void setBread(string b);
	int getAge();
	void setAge(int a);
	void print();
};

string Dog::getName()
{
	return name;
}

void Dog::setName(string n)
{
	name = n;
}

string Dog::getBread()
{
	return bread;
}

void Dog::setBread(string b)
{
	bread = b;
}

int Dog::getAge()
{
	return age;
}

void Dog::setAge(int a)
{
	age = a;
}

void Dog::print()
{
	cout << "이름: " << name << endl;
	cout << "종류: " << bread << endl;
	cout << "나이: " << age << endl;
}
int main12() {
	Dog dog("강아지","푸들",1);
	
	dog.print();
	return 0;
}
