#include<iostream>
#include<string>
#include<memory>
using namespace std;

class Student {
private:
	string name, telephone;
public:
	Student(const string n = "", const string t=""):name(n),telephone(t) {}
	string getTelephone() const { return telephone; }
	void setTelephone(const string t) { telephone = t; }
	string getName() const { return name; }
	void setName(const string n) { name = n; }


};
class Lab {
	string name;
	Student* chief;
	
public:

	Lab(string n = "") :name(n), chief(nullptr) {}

	void setChief(Student* p) { chief = p; }
	void print() const {
		cout << name << "������" << endl;
		if (chief != nullptr)
			cout << "������ " << chief->getName() << endl;
		else
			cout << "������ ���� �����ϴ�" << endl;

	}
};
int main12() {
	Lab lab("���� ó��");
	Student* p = new Student("��ö��", "011-123-5678");
	
	lab.setChief(p);
	lab.print();

	delete p;
	return 0;
}