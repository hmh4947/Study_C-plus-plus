#include<iostream>
using namespace std;

class Time2 {
public:

	Time2(int h, int m);
	void inc_hour();
	void print();

	int getHour() { return hour; }
	int getMinute() { return minute; }
	void setHour(int h) { hour = h; }
	void setMinute(int m) { minute = m; }
private:
	int hour;
	int minute;

};
Time2::Time2(int h, int m) {
	hour = h;
	minute = m;

}
void Time2::inc_hour() {
	++hour;
	if (hour > 23)
		hour = 0;
}
void  Time2::print() {
	cout << hour << ":" << minute << endl;
}
int main3() {
	Time2 a(0, 0);
	a.setHour(6);
	a.setMinute(30);
	a.print();
	return 0;
}