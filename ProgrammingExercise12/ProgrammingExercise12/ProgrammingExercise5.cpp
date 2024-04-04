#include<iostream>
#include<vector>
using namespace std;

class Animal {
public:
	virtual void speak() = 0;
	virtual ~Animal(){}
};
class Dog :public Animal {
public:
	virtual void speak() { cout << "港港!"<<endl; }
};
class Cat :public Animal {
public:
	virtual void speak() { cout << "具克!"<<endl; }
};
int main() {
	vector<Animal*> animals;
	Dog dog1;
	Cat cat1, cat2;

	Animal* p1 = &dog1;
	Animal* p2 = &cat1;
	Animal* p3 = &cat2;

	animals.push_back(p1);
	animals.push_back(p2);
	animals.push_back(p3);

	for (auto& a : animals) {
		a->speak();
	
	}
	
	return 0;
}