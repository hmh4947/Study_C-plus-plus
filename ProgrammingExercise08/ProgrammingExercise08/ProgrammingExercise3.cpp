#include<iostream>
#include<time.h>
using namespace std;

class Circle {
	int radius;
public:

	void setRadius(int radius);
	double getArea();
};

void Circle::setRadius(int radius)
{
	this->radius = radius;
}


double Circle::getArea()
{
	return radius * radius * 3.14;
}

int main3() {
	srand((unsigned int)time(NULL));
	int i;
	int r;
	cout << "������ ���� ����: ";
	cin >> i;
	Circle* pCircle = new Circle[i];
	int c = 0;


	for (int n = 0; n < i; n++) {
		r = rand() % 100 + 1;
		cout << "�� " << n + 1 << "�� ������ >> " << r << endl;

		pCircle[n].setRadius(r);

		if (pCircle[n].getArea() >= 100) {
			c++;
		}
	}

	cout << "������ 100���� ū ���� " << c << "�� �Դϴ�" << endl;

	delete[] pCircle;
	return 0;
}