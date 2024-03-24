#include<iostream>
using namespace std;

class Dog2 {
private:
	string name;
	int age;
public:
	Dog2() {
		age = 1;
		name = "바둑이";

	}
	~Dog2(){}
	int getAge() { return age; }
	void setAge(int dog_age) { age = dog_age; }
};

int main6() {
	Dog2* pDog2 = new Dog2;
	cout << "강아지의 나이: " << pDog2->getAge() << endl;

	pDog2->setAge(5);
	cout << "강아지의 나이: " << pDog2->getAge() << endl;

	delete pDog2;
	return 0;
}