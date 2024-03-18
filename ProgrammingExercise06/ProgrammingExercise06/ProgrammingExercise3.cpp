#include<iostream>
#include<vector>
using namespace std;
class Rect {
	int w, h;
public:
	Rect() :w{ 0 }, h{ 0 } {}
	Rect(int w, int h) : w{ w }, h{ h } {}
	int area() { return w * h; }
	void print() {
		cout << "(" << w << "," << h << ")" << endl;

	}
};

int main3() {

	int s;
	int wid, hei;
	cout << "�簢���� ����: ";
	cin >> s;
	vector<Rect> vec;
	for (int i = 0; i < s; i++) {
		cout << "�簢���� ��: ";
		cin >> wid;
		cout << "�簢���� ����: ";
		cin >> hei;
		vec.push_back(Rect(wid, hei));
	}
	for (auto& rect : vec) {
		if (rect.area() > 100) {
			rect.print();
		}
	}
	return 0;
}