#include<iostream>
#include<string>
using namespace std;

int main5() {
	double c_temp;
	double f_temp;
	cout << "È­¾¾¿Âµµ¸¦ ÀÔ·ÂÇÏ¼¼¿ä: ";
	cin >> f_temp;
	c_temp = (5.0 / 9.0) * (f_temp - 32);
	cout << "È­¾¾¿Âµµ " << f_temp << "µµ´Â ¼·¾¾¿Âµµ " << c_temp << "ÀÔ´Ï´Ù."<<endl;

	cout << "¼·¾¾¿Âµµ¸¦ ÀÔ·ÂÇÏ¼¼¿ä: ";
	cin >> c_temp;
	c_temp = (5.0 / 9.0) * (f_temp - 32);
	cout << "¼·¾¾¿Âµµ " << c_temp << "µµ´Â È­¾¾¿Âµµ " << f_temp << "ÀÔ´Ï´Ù.";

	return 0;
}