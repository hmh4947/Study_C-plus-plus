#include<iostream>
#include<vector>
#include<cstdlib>
#include<time.h>
using namespace std;

class Color {

public:
	int r, g, b;
	Color(int r, int g, int b) :r{ r }, g{ g }, b{ b } {  }

	void print() {
		cout << "rgb(" << r << ", " << g << ", " << b << ")\n";
	}
};
int main16() {
	srand(time(NULL));


	vector<Color> rgbList;
	for (int i = 0; i < 3; i++) {
		Color color(rand() % 255, rand() % 255, rand() % 255);
		rgbList.push_back(color);
	}

	for (auto& color : rgbList) {

		color.print();

	}


	return 0;
}