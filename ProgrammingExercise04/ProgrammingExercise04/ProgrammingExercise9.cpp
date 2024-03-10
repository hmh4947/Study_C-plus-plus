#include<iostream>
using namespace std;

class Triangle {
public:
	int b, h;
	int t_area;
	void area(int base, int high);
	void print();
};

void Triangle::area(int base, int high)
{
	
	b = base;
	h = high;
	t_area = b * h / 2;

}

void Triangle::print()
{
	cout << "밑변이 " << b << "이고 높이가 " << h << "인 삼각형의 면적: " << t_area << endl;

}
int main9() {
	Triangle t;
	t.area(3, 4);
	t.print();
	return 0;
}

