#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

template <typename T>
void swap_values(T& x, T& y) {
	T temp;
	temp = x;
	x = y;
	y = temp;

}
void swap_values(char* s1, char* s2) {
	int len;

	len = (strlen(s1) >= strlen(s2)) ? strlen(s1) : strlen(s2);
	char* tmp = new char[len + 1];
	strcpy(tmp, s1);
	strcpy(s1, s2);
	strcpy(s2, tmp);
	delete[] tmp;

}
int main8() {
	int x = 100, y = 200;
	swap_values(x, y);	//x,y가 모두 int 타입- OK
	cout << x << " " << y << endl;

	char s1[100] = "This is a first string";
	char s2[100] = "This is a second string";
	swap_values(s1, s2);
	cout << s1 << " " << s2 << endl;
	return 0;
}