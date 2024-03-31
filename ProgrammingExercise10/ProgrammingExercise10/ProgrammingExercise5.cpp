#include<iostream>
#include<time.h>
using namespace std;

class Time {
private:
	int hours;
	int minutes;
public:
	Time() :hours(0), minutes(0) {}
	Time(int h, int m) :hours{ h }, minutes{ m } {}
	~Time(){}
	void displayTime() {
		cout << hours << ": " << minutes << endl;
	}
	void setCurrentTime() {
		time_t timer;
		struct tm t;
		timer = time(NULL);
		localtime_s(&t, &timer);

		hours=t.tm_hour;
		minutes = t.tm_min;

	}
	 Time operator++(int i) { //operator+ 이항연산자, operator++ 단항연산자
		Time t;
		if (minutes == 59) {
			minutes = 0;
			hours++;
		}
		else {
			minutes++;
		}
		return t;
	}
	 
};
int main5() {
	
	
	Time t;
	t.setCurrentTime();
	t.displayTime();
	t++;
	t.displayTime();
	t++;
	t.displayTime();
	return 0;


}