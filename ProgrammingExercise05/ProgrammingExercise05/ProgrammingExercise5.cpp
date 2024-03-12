#include<iostream>
#include<math.h>
using namespace std;

class Complex {
	double r;
	double i;
public:
	Complex() {
		r = 0;
		i = 0;
	}
	Complex(double _r, double _i) :r(_r), i(_i) {}
	
	void print();
	double getR();
	void setR(double _r);
	double getI();
	void setI(double _i);
};

Complex add(Complex a, Complex b)
{
	Complex sum;
	sum.setR(a.getR() + b.getR());
	sum.setI(a.getI() + b.getI());
	return sum;
	
}

void Complex::print()
{
	if (i < 0) {
		cout << "(" << r << "-" << abs(i) << "i)";
	}
	
	else
	{
		cout << "(" << r << "+" << i << "i)";
	}


}

double Complex::getR()
{
	return r;
}

void Complex::setR(double _r)
{
	r = _r;
}

double Complex::getI()
{
	return i;
}

void Complex::setI(double _i)
{
	i = _i;
}
int main5() {
	Complex a(5,3);
	Complex b(3,-4);
	
	a.print();
	cout << "+";
	b.print();
	cout << "=";
	add(a, b).print();
	return 0;
}

