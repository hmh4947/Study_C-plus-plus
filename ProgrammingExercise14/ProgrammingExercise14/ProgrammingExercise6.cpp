#include<iostream>
using namespace std;

template <class T>

bool isEqual(T arr1[], T arr2[], int n) {

	for (int i = 0; i < n; i++) {
		arr1[i] = arr2[i];
		return true;
	}
	return false;
}
int main6() {
	double list1[] = { 1.2,3.3,9.0,1.5,8.7 };
	double list2[] = { 1.2,3.3,9.0,1.5,8.7 };
	bool check = isEqual(list1,list2, 5);

	cout  << boolalpha<<check << endl;

	return 0;
}