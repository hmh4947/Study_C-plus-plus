#include<iostream>
using namespace std;

class Game {
public:
	static int count;
	static int getCount() {
		return count;
	}

	Game() {
		count++;

	}
	~Game() {
		count--;
	}
	
};
int Game::count = 0;
int main6() {
	cout << "���� ����ڼ�: " << Game::getCount() << endl;
	Game player1;
	cout << "���� ����ڼ�: " << Game::getCount() << endl;

	return 0;
}