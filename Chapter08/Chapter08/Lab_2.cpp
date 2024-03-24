#include<iostream>
#include<string>
#include<memory>
using namespace std;
//스마트 포인터 이용

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
		cout << name << "연구실" << endl;
		if (chief != nullptr)
			cout << "실장은 " << chief->getName() << endl;
		else
			cout << "실장은 현재 없습니다" << endl;

	}
};
int main13() {
	Lab lab("영상 처리");

	unique_ptr<Student>p = make_unique<Student>("김철수", "011-123-5678");
	

	lab.setChief(move(p));
	lab.print();

	return 0;
}