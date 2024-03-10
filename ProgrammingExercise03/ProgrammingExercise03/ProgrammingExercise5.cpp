#include<iostream>
#include<string>
using namespace std;
void sayHello(int n = 1) {
	for (int i = 0; i < n; i++) {
		cout<<" Hello";
	}
	cout << endl;
}
int main5() {
	int num;
	cout << "sayHello()-> ";
	sayHello();
	cout << "sayHello(3)-> ";
	sayHello(3);
	return 0;
}