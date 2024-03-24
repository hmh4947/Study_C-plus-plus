#include<iostream>
#include<memory>	
using namespace std;

class Dog5 {
private:
	string name;
	int age;
public:
	Dog5() {
		age = 1;
		name = "바둑이";

	}
	~Dog5(){}
	int getAge() { return age;}
	void setAge(int dog_age) { age = dog_age; }

};
int main9() {
	std::unique_ptr<Dog5> pDog(new Dog5);
	cout << "강아지의 나이: " << pDog->getAge() << endl;
	pDog->setAge(5);
	cout << "강아지의 나이: " << pDog->getAge() << endl;
	return 0;
}