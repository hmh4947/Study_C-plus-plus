#include<iostream>
using namespace std;

class Camera {
public:
	static Camera* getInstance();
private:
	Camera(){}
	static Camera* instance;
public:
	void capture() {
		cout << "���� �Կ��� ����Ǿ���!" << endl;

	}
};
Camera* Camera::instance = 0;
Camera* Camera::getInstance() {
	if (!instance ) {
		instance = new Camera();
		cout << "ù ��° ��ü�� ������" << endl;
		return instance;
	}
	else {
		cout << "���� ��ü�� ��ȯ��" << endl;
		return instance;

	}
}
int main7() {
	Camera* s1 = Camera::getInstance();
	Camera* s2 = Camera::getInstance();
	Camera* s3 = Camera::getInstance();
	s1->capture();
	return 0;
}