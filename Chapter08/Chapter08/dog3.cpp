#include<iostream>
using namespace std;
class Dog3 {
private:
	int* pWeight;
	int* pAge;
public:
	Dog3() {
		pAge = new int{ 1 };
		pWeight = new int{ 10 };

	}
	~Dog3() {
		delete pAge;
		delete pWeight;

	}
	int getAge() { return *pAge; }
	void setAge(int age) { *pAge = age; }
	int getWeight() { return *pWeight; }
	void setWeight(int weight) { *pWeight = weight; }
};
int main7() {
	Dog3* pDog3 = new Dog3;

	cout << "강아지의 나이: " << pDog3->getAge() << endl;

	pDog3->setAge(5);
	cout << "강아지의 나이: " << pDog3->getAge() << endl;
	delete pDog3;
	return 0;
}