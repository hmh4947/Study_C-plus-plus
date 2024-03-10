#include<iostream>
#include<string>
using namespace std;

class Circle_7 {
public:
	double calcArea();
	int radius;
	string color;

};

double Circle_7::calcArea() {
	return 3.14 * radius * radius;

}
int main6(void)
{
	Circle_7 c;
	c.radius = 10;
	cout << c.calcArea() << endl;


	return 0;
}