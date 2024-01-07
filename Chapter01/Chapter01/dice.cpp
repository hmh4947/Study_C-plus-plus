#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main6() {


	srand(time(NULL));
	int dice1 = (rand() % 6) + 1;
	int dice2 = (rand() % 6) + 1;
	int dice3 = (rand() % 6) + 1;
	int dice4 = (rand() % 6) + 1;
	int dice5 = (rand() % 6) + 1;
	int dice6 = (rand() % 6) + 1;

	cout << "주사위 6개의 합=" << dice1 + dice2+dice3+dice4 + dice5 + dice6 << endl;
	
	
	return 0;
}
