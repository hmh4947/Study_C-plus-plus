#include<iostream>
using namespace std;

class CellPhone{
public:
	string number;
	string model;
	string color;
	bool on;

	void init(string myNumber,string myModel,string myColor);
	void setOn();
	void print();

};



void CellPhone::init(string myNumber, string myModel, string myColor)
{
	number = myNumber;
	model = myModel;
	color = myColor;
}

void CellPhone::setOn()
{
	if (on == true)
	{
		cout << "true"<<endl;
	}
	else {
		cout << "false" << endl;
	}
}
void CellPhone::print()
{
	cout << number << endl;
	cout << model << endl;
	cout << color << endl;
	
}
int main7() {
	CellPhone CellPhone1;
	cout << "CellPhone1: " << endl;
	CellPhone1.init("010-1234-5678", "Galaxy", "Black");
	CellPhone1.print();
	CellPhone1.on = true;
	CellPhone1.setOn();
	return 0;
}
