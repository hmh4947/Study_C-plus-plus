#include<iostream>
using namespace std;
class Car {
public:
	int speed;
	int gear;
	string  color;

	void speedUp() {
		speed += 10;
	}
	void speedDown() {
		speed -= 10;
	}

};
int main5() {
	Car car;
	car.speed = 100;
	car.gear = 3;
	car.color = "red";

	car.speedUp();
	car.speedDown();

	return 0;
}