#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Movie1 {
private:
	string title;
	double rating;
	string director;
	string lead_role;
public:
	Movie1(string t = "", double r = 0.0, string d = "", string lr = "") { title = t; rating = r; director = d; lead_role = lr; }
	void print_movie() {

		cout << "영화 제목: " << title << endl;
		cout << "평점: " << rating << endl;
		cout << "감독: " << director << endl;
		cout << "주연 배우: " << lead_role << endl;
		cout << "----------------------------------" << endl;
	}

};
int main10()
{
	
	vector<Movie1> movies;

	movies.push_back(Movie1("titinic", 9.9, "제임스 카메론", "레오나르도 디카프리오"));
	movies.push_back(Movie1("gone with the wind", 9.6, "빅터 프레밍", "클라크 게이블"));
	movies.push_back(Movie1("terminator", 9.7, "제임스 카메론", "아놀드 슈왈제네거"));

	for (auto& e : movies) {
		e.print_movie();

	}
	return 0;
}