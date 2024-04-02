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
		cout << "먹을 수 있음.\n";
	}
	void talk() {
		cout << "말할 수 있음.\n";
	}
	void run() {
		cout << "걸을 수 있음.\n";
	}
	void print() {
		cout << "나의 직업: " << getWork() << endl;
		cout << "나의 나이: " << getAge() << endl;
		run();
		talk();

	}
};
class Professor :public Person {

public:
	Professor(string w = "", int age = 0) :Person(w, age) {}
	void teach() {
		cout << "가르칠 수 있음.\n\n";

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
		cout << "테니스 경기를 할 수 있음.\n\n";
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
		cout << "사업을 할 수 있음.\n\n";
	}
	void print() {
		Person::print();
		runBusiness();
	}
};

int main() {
	Professor p("교수", 39);
	TennisPlayer t("테니스 선수", 23);
	p.print();
	t.print();
	return 0;
}