#include<iostream>
using namespace std;

class Weapon {
public:
	Weapon(){}
	virtual void load() = 0;
};
class Bomb:public Weapon {
public:
	Bomb() {}
	void load() {
		cout << "��ź�� �����մϴ�." << endl;
	}

};
class Gun :public Weapon {
public:
	Gun() {}
	void load() {
		cout << "���� �����մϴ�." << endl;
	}

};
int main2() {
	Weapon* weapons[2] = { NULL };

	weapons[0] = new Gun();
	weapons[1] = new Bomb();
	for (int i = 0; i < 2; i++) {
		weapons[i]->load();
	}
	weapons[1]->load();

	for (int i = 0; i < 2; i++) {
		delete weapons[i];
		weapons[i] = nullptr;
	}
	//���� ��� for ������ auto Ű���带 ����� �� �迭�� ���ҿ� ���� �����Ͱ� �ƴ�, ���� ��ü�� ������ ����
	//->weapons �迭�� Ÿ���� Weapon*�̹Ƿ�, �̸� �����ϱ� ���ؼ� �Ϲ� for ������ ���
	/*for (auto& weapon : weapons) {
		delete weapon;
		weapon = nullptr;
	}*/
	
	
	return 0;
}