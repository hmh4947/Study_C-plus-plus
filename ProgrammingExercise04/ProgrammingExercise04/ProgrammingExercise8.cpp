#include<iostream>
using namespace std;

class Complex {
public:
	double r;
	double i;
	void init(double real_n, double imaginary_n);
	void print();

};

void Complex::init(double real_n, double imaginary_n)
{
	r = real_n;
	i = imaginary_n;

}

void Complex::print()
{
	if(i>0)
	{
		cout << r << " + " << i << "i" << endl;
	}
	if(i<0)
	{
	cout << r  << " - " << abs(i)  << "i" << endl;
	}
}
int main8() {
	Complex c;
	c.init(5,3);
	c.print();
	c.init(3, -4);
	c.print();
	return 0;
}
