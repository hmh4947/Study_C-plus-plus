#include <iostream>
using namespace std;
class Person {

public:
	string name;
	int age;
	void setPerson(string myName, int myAge);
	void print();	

};

void Person::setPerson(string myName, int myAge)
{
	 name=myName;
	 age=myAge;
}

void Person::print() {
	cout << "이름: " << name << endl;
	cout << "나이: " << age << endl;

}
int main1()
{
	Person p;
	p.setPerson("김철수", 21);
	p.print();
	return 0;
}
