#include<iostream>
using namespace std;

template <class T>

T getAveragage(T arr[], int n) {
	T sum=0;

	for (int i = 0; i < n; i++) {
		sum+= arr[i];
	}
	return sum / n;
}
int main5() {
	double list[] = { 1.2,3.3,9.0,1.5,8.7 };
	double n = getAveragage(list, 5);
	cout << "Æò±Õ°ª: "<<n << endl;

	return 0;
}