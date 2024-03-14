#include<iostream>
#include<string>
#include<vector>
#include<conio.h>
using namespace std;

class Movie {
private:
	string title;
	double rating;

public:
	Movie(string t = "", double r = 0.0) { title = t; rating = r;}
	void print_movie() {

		cout << "영화 제목: " <<title<< endl;
		cout<< "평점: " << rating << endl;
		cout << "----------------------------------" << endl;
	}
	
};
int main11(void)
{
	char ch = _getch();
	string myTitle;
	double myRating;


	vector<Movie> movies;
	for(int i=0; i<5;i++){
		cout << "영화 제목: ";
		cin >> myTitle;
		cin.ignore();
		cout << "평점: ";
		cin >> myRating;
		cin.ignore();
		movies.push_back(Movie(myTitle, myRating));


	}

	cout << ">>>>>>>>>>>영화 정보<<<<<<<<<<<" << endl;
		                      
	
	for (auto& e : movies) {
	
		e.print_movie();

	}
	return 0;
}