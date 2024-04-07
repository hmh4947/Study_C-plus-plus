#include<iostream>
using namespace std;

template<typename T>
class Box {
	T data;
public:
	Box(){}
	void set(T value) {
		data = value;

	}
	T get() {
		return data;
	}

};
int main10() {
	Box<int> box;
	box.set(100);
	cout << box.get() << endl;
	Box<double>box1;
	box1.set(3.141592);
	cout << box1.get() << endl;
	return 0;
}