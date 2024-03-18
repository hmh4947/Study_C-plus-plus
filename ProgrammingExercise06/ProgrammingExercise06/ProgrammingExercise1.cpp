#include <iostream>
#include<vector>
using namespace std;
int main1()
{
	int s, n;
	int max = 0;
	int min = 0;

	cout << "정수의 개수: ";
	cin >> s;
	vector<int> v;
	for (int i = 0; i < s; i++)
	{
		cout << "정수를 입력하시오: ";
		cin >> n;
		v.push_back(n);
	}



	for (int i = 1; i < s; i++)
	{
		if (v[max] <= v[i]) {
			max = i;

		}
		if (v[min] >= v[i]) {
			min = i;
		}

	}
	cout << "최대값: " << v[max] << endl;
	cout << "최소값: " << v[min] << endl;

	return 0;
}
