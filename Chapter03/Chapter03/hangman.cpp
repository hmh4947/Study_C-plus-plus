#include<iostream>
#include<string>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main13() {
	char ch;
	string solution;
	string list[] = {
		"the",
		"c++",
		"programming",
		"language",

		"mon",
		"tue",
		"wed",
		"thr",
		"fri",
		"sat"
	};

	srand((unsigned int)time(NULL));
	int n = rand()%10;
	solution = list[n];
	string guess(solution.length(), '-');
	while (true) {
		cout << guess << endl;
		cout << "���ڸ� �Է��Ͻÿ�: ";
		cin >> ch;
		for (int i = 0; i < solution.length(); i++)
		{
			if (ch == solution[i]) {
				guess[i] = ch;
			}
		}
		if (solution == guess) {
			cout << solution << endl;
			cout << "�����Ͽ����ϴ�.!";
			break;

		}
	}
	return 0;
}
