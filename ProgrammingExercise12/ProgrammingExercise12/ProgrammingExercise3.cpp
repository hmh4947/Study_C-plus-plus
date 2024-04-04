#include<iostream>
using namespace std;

class HomeAppliance {
public:
	int price;
	HomeAppliance(int p):price(p){}
	virtual double getPrice() = 0;
	
};

class Refrigerator :public HomeAppliance {
public:
	Refrigerator(int p):HomeAppliance(p) {}
	double getPrice() {
		return price * 0.95;
	}
};
class Television :public HomeAppliance {
public:
	Television(int p) :HomeAppliance(p) {}
	double getPrice() {
		return price * 0.9;
	}
};

int main3() {
	HomeAppliance* home[3] = { NULL };
	home[0] = new Refrigerator(10000);
	home[1] = new Refrigerator(200000);
	home[2] = new Television(300000);
	for (int i = 0; i < 3; i++) {
		cout << "АЁАн: "<<home[i]->getPrice() << endl;
		
	}
	for (int i = 0; i < 3; i++) {
		delete home[i];
		home[i] = nullptr;
	}
	return 0;
}