#include <iostream>
using namespace std;
class Time {
public:
	int hour;
	int minute;
	//持失切
	Time() {
		hour = 0;
		minute = 0;
	}
	//持失切
	Time(int h, int m) { 
		hour = h;
		minute = m;
	}
	void print() {
		cout << hour << ":" << minute << endl;

	}
};
int main2()
{
	Time a;
	Time b(10, 25);
	a.print();
	b.print();
	return 0;
}
