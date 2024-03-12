#include<iostream>
using namespace std;

class Movie {
private:
	string title;
	string director;
	float rating;
public:
	Movie(string t, string d, float r) :title(t), director(d), rating(r) {}
	Movie() {
		title = "타이타닉";
		director = "제임스 카메론";
		rating = 9.5;

	}
	string getTitle();
	void setTitle(string t);
	string getDirector();
	void setDirector(string d);
	float getRating();
	void setRating(float r);
	void print();

};

string Movie::getTitle()
{
	return title;
}

void Movie::setTitle(string t)
{
	title = t;
}

string Movie::getDirector()
{
	return director;
}

void Movie::setDirector(string d)
{
	director = d;
}

float Movie::getRating()
{
	return rating;
}

void Movie::setRating(float r)
{
	rating = r;
}

void Movie::print()
{
	cout << "영화 제목: " << title << endl;
	cout << "영화 감독: " << director << endl;
	cout << "영화 평점: " << rating << endl;
}
int main4() {
	Movie m1;
	Movie m2;
	m2.setTitle("지오스톰");
	m2.setDirector("딘 데블린");
	m2.setRating(8.34);
	cout << "영화 #1" << endl;
	m1.print();
	printf("\n");
	cout << "영화 #2" << endl;
	m2.print();
	return 0;
}
