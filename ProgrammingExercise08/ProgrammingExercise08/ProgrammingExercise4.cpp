#include<iostream>
#include<ctime>

using namespace std;

class Time {
public:
	int hour, min, sec;
	Time() {
		hour = 0;
		min = 0;
		sec = 0;
	}
	Time(int h, int m, int s) :hour(h),min(m),sec(s){}
	~Time(){}
	void print();
	int getHour() { return hour; }
	void setHour(int h) { hour = h; }
	int getMin() { return min; }
	void setMin(int m) { min = m; }
	int getSec() { return sec; }
	void setSec(int s) { sec = s; }
	bool isEqual(Time& t1, Time& t2);
	bool isEqual(Time* pt1, Time* pt2);
};

void Time::print()
{
	cout << hour << " : " << min << " : " << sec << endl;
}
bool Time::isEqual(Time& t1, Time& t2)
{
	bool equal;
	if (t1.getHour() == t2.getHour() && t1.getMin() == t2.getMin() && t1.getSec() && t2.getSec()) {
		equal = true;
	}
	else {
		equal = false;
	}
	return equal;
}
bool Time::isEqual(Time* pt1, Time* pt2)
{
	bool equal;
	if (pt1->getHour() == pt2->getHour() && pt1->getMin() == pt2->getMin() && pt1->getSec() && pt2->getSec()) {
		equal = true;
	}
	else {
		equal = false;
	}
	return equal;
}
int main4() {

	time_t timer = time(NULL);
	struct tm t;
	localtime_s(&t,&timer);

	Time* time = new Time[2];
	time[0] = Time(t.tm_hour, t.tm_min, t.tm_sec);
	time[1] = Time(t.tm_hour, t.tm_min, t.tm_sec);

	time[0].print();
	time[1].print();
	if (time->isEqual(time[0],time[1]) == true) {
		cout << "시간이 일치합니다." << endl;
	}
	if (time->isEqual(&time[0], &time[1]) == true) {
		cout << "시간이 일치합니다." << endl;
	}
	delete[] time;
	return 0;
}