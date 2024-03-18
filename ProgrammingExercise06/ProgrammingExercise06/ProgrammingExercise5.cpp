#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Student {
public:
	string name;
	double marks;
	Student(string n, double m) :name{ n }, marks{ m } {}
	void print() {
		cout << "�̸�: " << name << endl;
		cout << "����: " << marks << endl;

	}
	
};
bool compare(Student s1, Student s2) {
	if(s1.marks > s2.marks)
	{
		return true;
	}
	else {
		return false;
	}

}
int main5() {
	string n;
	double m;
	vector<Student> students;

	
	for (int i = 0; i < 3; i++) {
		cout << "�̸��� �Է��ϼ���: ";
		cin >> n;
		cin.ignore();
		cout << "������ �Է��ϼ���: " ;
		cin >> m;
		cin.ignore();
		students.push_back(Student(n, m));

	}
	cout << "================================" << endl;
	sort(students.begin(), students.end(), compare);
	for (auto& student : students) {

		student.print();
	}
	cout << "================================" << endl;
	return 0;
}