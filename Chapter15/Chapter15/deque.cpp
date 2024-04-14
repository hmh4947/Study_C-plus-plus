#include<iostream>
#include<deque>
using namespace std;

int main5() {
	deque<int> dq = { 1,2,3,4,5,6,7,8,9,10 };
	dq.pop_front();
	dq.push_back(11);
	for (auto& n : dq)
		cout << n << " ";
	cout << endl;
	return 0;
}