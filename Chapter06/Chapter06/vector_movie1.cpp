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

		cout << "��ȭ ����: " << title << endl;
		cout << "����: " << rating << endl;
		cout << "����: " << director << endl;
		cout << "�ֿ� ���: " << lead_role << endl;
		cout << "----------------------------------" << endl;
	}

};
int main10()
{
	
	vector<Movie1> movies;

	movies.push_back(Movie1("titinic", 9.9, "���ӽ� ī�޷�", "���������� ��ī������"));
	movies.push_back(Movie1("gone with the wind", 9.6, "���� ������", "Ŭ��ũ ���̺�"));
	movies.push_back(Movie1("terminator", 9.7, "���ӽ� ī�޷�", "�Ƴ�� �������װ�"));

	for (auto& e : movies) {
		e.print_movie();

	}
	return 0;
}