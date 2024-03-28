#include<iostream>
using namespace std;

class Line {
public:
	int getLength() const;
	Line(int len);
	Line(const Line& other);
	~Line();
private:
	int* ptr;
};

int Line::getLength() const
{
	return *ptr;
}

Line::Line(int len)
{
	cout << "�Ϲ� ������" << endl;
	ptr = new int;
	*ptr = len;

}

Line::Line(const Line& other)
{
	cout << "���� ������" << endl;
	this->ptr = new int;
	*ptr = other.getLength();
}

Line::~Line()
{
	if (ptr != nullptr) delete[] this->ptr;
	ptr = nullptr;
}

int main2() {
	Line line1(10);
	Line line2(line1);
	Line line3(line1);
	cout << "���� ����: " << line1.getLength() << endl;
	Line line4(line1);
	cout << "���� ����: " << line4.getLength() << endl;
	return 0;
}
