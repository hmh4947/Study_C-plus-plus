#define _CRT_SECURE_NO_WARNINGS // 경고 비활성화
#include<iostream>
#include<string>
using namespace std;

class MyClass {
public: 
	MyClass(const char* str);
	MyClass(const MyClass& other);
	~MyClass();
	const char* getStr();
private:
	char* stored;

};

MyClass::MyClass(const char* str)
{
	stored = new char[strlen(str) + 1];
	strcpy(stored, str);
}

MyClass::MyClass(const MyClass& other)
{
	this->stored = new char[strlen(other.stored)+1];
	strcpy(stored, other.stored);

}

MyClass::~MyClass()
{
	delete[] stored;
}
const char* MyClass::getStr()
{
	return stored;
}
int main3() {
	char* p;
	char s[] = "MyClass";
	p = s;
	MyClass c1(p);
	MyClass c2(c1);
	cout << "c1: " << c1.getStr() << endl;
	cout << "c2: " << c2.getStr() << endl;
	return 0;
}
