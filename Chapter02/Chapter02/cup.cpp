//중간점검
#include <iostream>
using namespace std;
int main4() {
	int size;
	cout << "컵의 사이즈(ml): ";
	cin >> size;

	if (size < 100)
		cout << "small" << endl;
	else if (size >= 100 && size < 200)
		cout << "medium" << endl;
	else
		cout << "large" << endl;

	return 0;

}