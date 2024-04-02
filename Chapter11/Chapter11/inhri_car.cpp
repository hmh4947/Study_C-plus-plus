#include<iostream>
#include<string>
using namespace std;

class Car {
	int speed; //속도
public:
	void setSpeed(int s) { speed = s; }
	int getSpeed() { return speed; }

};
//Car 클래스를 상속받아서 다음과 같이 SportsCar 클래스를 작성한다.
class SportsCar :public Car {
	bool turbo;
public:
	void setTurbo(bool newValue) { turbo = newValue; }
	bool getTurbo() { return turbo; }
};
int main1() {
	SportsCar c;
	c.setSpeed(60);
	c.setTurbo(true);
	c.setSpeed(100);
	c.setTurbo(false);
	return 0;
}