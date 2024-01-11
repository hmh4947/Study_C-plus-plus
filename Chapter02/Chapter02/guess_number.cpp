#include <iostream>
#include<time.h>
using namespace std;
int main17() {
	srand(time(NULL));
	int answer;
	int guess;
	int tries=0;

	cout << "1~100사이의 숫자 입력: " << endl;
	cin >> answer;
	int start;
	int end;
	start = 1;
	end = 100;


	do {
		guess = (start + end) / 2;
		tries++;

		if (answer > guess) {
			cout << "제시한 정수는"<<guess<< "낮습니다." << endl;
			start = guess + 1;
		}
		else if (answer < guess) {
			cout << "제시한 정수는" << guess << "높습니다." << endl;
			end = guess - 1;
		}
		
	} while (guess != answer);
	cout << "축하합니다. 시도 횟수=" << tries << endl;
	return 0;
	
}
