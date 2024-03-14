#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

class Rect {
	
public:
	int w, h;
	Rect() :w{ 0 }, h{ 0 } {}
	Rect(int w, int h) :w{ w }, h{ h } {}
	void print() {
		cout << "Æø: " << w << "³ôÀÌ: " << h<<endl;

	}

};
bool compare(Rect& a, Rect& b) {
	return a.w * a.h > b.w * b.h;
}
int main14() {
	int myW;
	int myH;
	vector<Rect> v;
	for(int i=0; i<3; i++)
	{
		cout << "Æø: ";                                                                                                                                                                                                                                                                                                                                                                                 
		cin >> myW;
		cin.ignore();
		cout << "³ôÀÌ: ";
		cin >> myH;
		cin.ignore();
		v.push_back(Rect(myW, myH));
		
	}
	sort(v.begin(), v.end(), compare);
	for (auto& rect : v) {
		
		rect.print();
	}
	return 0;
}