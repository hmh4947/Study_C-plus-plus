#include <iostream>
#include<time.h>
using namespace std;
int main17() {
	srand(time(NULL));
	int answer;
	int guess;
	int tries=0;

	cout << "1~100������ ���� �Է�: " << endl;
	cin >> answer;
	int start;
	int end;
	start = 1;
	end = 100;


	do {
		guess = (start + end) / 2;
		tries++;

		if (answer > guess) {
			cout << "������ ������"<<guess<< "�����ϴ�." << endl;
			start = guess + 1;
		}
		else if (answer < guess) {
			cout << "������ ������" << guess << "�����ϴ�." << endl;
			end = guess - 1;
		}
		
	} while (guess != answer);
	cout << "�����մϴ�. �õ� Ƚ��=" << tries << endl;
	return 0;
	
}
