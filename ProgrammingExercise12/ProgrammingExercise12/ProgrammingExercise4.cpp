#include<iostream>
using namespace std;

class GameCharacter {
public:
	GameCharacter(){}
	virtual void draw() = 0;
};

class Hobbit :public GameCharacter {
public:
	Hobbit(){}
	void draw() {
		cout << "ȣ���� ȭ�鿡 �׸��ϴ�." << endl;
	}

};
class Sorcerer :public GameCharacter {
public:
	Sorcerer(){}
	void draw() {
		cout << "�ּ��縦 ȭ�鿡 �׸��ϴ�." << endl;

	}

};
int main4() {
	GameCharacter* characters[3] = { NULL };
	characters[0] = new Hobbit();
	characters[1] = new Sorcerer();
	characters[2] = new Hobbit();

	for (int i = 0; i < 3; i++) {
		characters[i]->draw();
	}
	for (int i = 0; i < 3; i++) {
		delete characters[i];
		characters[i] = nullptr;
	}
	return 0;
}