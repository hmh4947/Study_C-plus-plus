#include<iostream>
#include<string>
#include<memory>
using namespace std;
//����Ʈ ������ �̿�

class Student {
private:
	string name, telephone;
public:
	Student(const string n = "", const string t = "") :name(n), telephone(t) {}
	string getTelephone() const { return telephone; }
	void setTelephone(const string t) { telephone = t; }
	string getName() const { return name; }
	void setName(const string n) { name = n; }


};
class Lab {
	string name;
	unique_ptr<Student> chief;


public:

	Lab(string n = "") :name(n), chief(nullptr) {}


	void setChief(unique_ptr<Student> p) { chief = move(p); }
	void print() const {
		cout << name << "������" << endl;
		if (chief != nullptr)
			cout << "������ " << chief->getName() << endl;
		else
			cout << "������ ���� �����ϴ�" << endl;

	}
};
int main13() {
	Lab lab("���� ó��");

	unique_ptr<Student>p = make_unique<Student>("��ö��", "011-123-5678");
	

	lab.setChief(move(p));
	lab.print();

	return 0;
}