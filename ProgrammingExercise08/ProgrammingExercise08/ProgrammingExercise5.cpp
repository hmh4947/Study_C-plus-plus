#include<iostream>
#include<string>
using namespace std;

class Student {
	string name;
public:
	Student(string name = "") :name(name) {}
	string getName() { return name;}
	void setName(string name) { this->name = name; }

};
class MyClass {
	string className;
	Student* p;
	int size;
public:
	string getName() { return className; }
	void setName(string n) { className = n; }
	Student* getStudent() { return p; }
	void setStudent() { p = new Student[size]; }
	int getSize() { return size; }
	void setSize(int s) { size = s; }
};

int main5() {
	MyClass *special=new MyClass[3];

	special->setName("special");

	special->setSize(3);
	special->setStudent();
	special->getStudent()[0].setName("홍길동");
	special->getStudent()[1].setName("김철수");
	special->getStudent()[2].setName("최자영");



	cout << "학급" <<special->getName()<<"의 학생들은 다음과 같다." << endl;

	for (int i = 0; i < special->getSize(); i++) {
		cout << "학생 #" << i + 1 << ": " << special->getStudent()[i].getName() << endl;

	}


	delete[] special->getStudent();
	delete[] special;
	return 0;

}