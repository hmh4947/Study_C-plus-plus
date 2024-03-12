#include<iostream>
using namespace std;

class Date {
	int year;
	int month;
	int day;
public:
	Date(){
		year = 0;
		month = 0;
		day = 0;
	}
	Date(int y, int m, int d):
	year(y),month(m),day(d){}

	bool isLeapYear(int y); //윤년이면 true 반환
	void print() const;
	int getYear();
	void setYear(int y);
	int getMonth();
	void setMonth(int m);
	int getDay();
	void setDay(int d);
	Date nextMonth();
};

bool Date::isLeapYear(int y)
{
	return (y % 4 == 0) ? true : false;
}

void Date::print() const
{
	cout << year << ",";
	cout << month << ",";
	cout << day << endl;
}



int Date::getYear()
{
	return year;
}

void Date::setYear(int y)
{
	year = y;
}

int Date::getMonth()
{
	return month;
}

void Date::setMonth(int m)
{
	month = m;
}

int Date::getDay()
{
	return day;
}

void Date::setDay(int d)
{
	day = d;
}

Date Date::nextMonth()
{
	if(month<12)
	{
		month += 1;
	}
	else {
		year += 1;
		month = 1;
	}
	return Date();
}
int main8() {
	Date date(2017, 9, 1);
	date.print();
	date.nextMonth();
	date.print();
	return 0;
}
