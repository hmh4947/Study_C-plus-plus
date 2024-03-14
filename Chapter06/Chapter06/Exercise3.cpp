#include<iostream>
#include<array>
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
int main15() {
	srand(time(NULL));


	array<int, 3> rgbList;
	
	for (auto& color : rgbList) {
		
		Color color(rand() % 255 , rand() % 255 , rand() % 255);
		color.print();

	}
	

	return 0;
}