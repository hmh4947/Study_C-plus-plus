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
		cout << "폭탄을 적재합니다." << endl;
	}

};
class Gun :public Weapon {
public:
	Gun() {}
	void load() {
		cout << "총을 적재합니다." << endl;
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
	//범위 기반 for 루프는 auto 키워드를 사용할 때 배열의 원소에 대한 포인터가 아닌, 실제 객체의 참조를 얻음
	//->weapons 배열의 타입은 Weapon*이므로, 이를 수정하기 위해선 일반 for 루프를 사용
	/*for (auto& weapon : weapons) {
		delete weapon;
		weapon = nullptr;
	}*/
	
	
	return 0;
}