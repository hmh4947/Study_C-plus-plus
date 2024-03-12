#include<iostream>
using namespace std;

class Book {
	string title;
	string author;
public:
	Book(string t, string a) :title(t), author(a) {}
	string getAuthor();
	void setAuthor(string a);
	string getTitle();
	void setTitle(string t);
	void print();
};

string Book::getAuthor()
{
	return author;
}

void Book::setAuthor(string a)
{
	author = a;
}
string Book::getTitle()
{
	return title;
}
void Book::setTitle(string t)
{
	title = t;
}

void Book::print()
{
	cout << "책 이름: " << title << endl;
	cout << "책 저자: " << author << endl;
}

int main1() {
	Book b("Great C++", "Bob");
	b.setTitle("Great C++");
	b.setAuthor("Bob");
	b.print();
	return 0;
}
