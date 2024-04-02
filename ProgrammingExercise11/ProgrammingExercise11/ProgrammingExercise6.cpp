#include<iostream>
#include<string>
using namespace std;

class Person {
	string work;
	int age;
public:
	Person(string w = "", int age = 0) :work(w), age(age) {}
	string getWork() { return work; }
	int getAge() { return age; }
	void eat() {
		cout << "���� �� ����.\n";
	}
	void talk() {
		cout << "���� �� ����.\n";
	}
	void run() {
		cout << "���� �� ����.\n";
	}
	void print() {
		cout << "���� ����: " << getWork() << endl;
		cout << "���� ����: " << getAge() << endl;
		run();
		talk();

	}
};
class Professor :public Person {

public:
	Professor(string w = "", int age = 0) :Person(w, age) {}
	void teach() {
		cout << "����ĥ �� ����.\n\n";

	}
	void print() {
		Person::print();
		teach();

	}

};
class TennisPlayer :public Person {
public:
	TennisPlayer(string w = "", int age = 0) :Person(w, age) {}
	void playTennis() {
		cout << "�״Ͻ� ��⸦ �� �� ����.\n\n";
	}
	void print() {
		Person::print();
		playTennis();
	}
};

class Businessman :public Person {
public:
	Businessman(string w = "", int age = 0) :Person(w, age) {}
	void runBusiness() {
		cout << "����� �� �� ����.\n\n";
	}
	void print() {
		Person::print();
		runBusiness();
	}
};

int main() {
	Professor p("����", 39);
	TennisPlayer t("�״Ͻ� ����", 23);
	p.print();
	t.print();
	return 0;
}