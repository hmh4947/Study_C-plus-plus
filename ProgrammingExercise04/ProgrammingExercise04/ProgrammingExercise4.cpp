#include<iostream>
using namespace std;

class Book {
public:
	string title;
	string author;
	void print();
	
};
void Book::print()
{
	cout << "å �̸�: " << title << endl;
	cout << "å ����: " << author << endl;


}

int main4() {
	Book myBook;
	myBook.title = "Great C++";;
	myBook.author = "Bob";
	myBook.print();

	return 0;
}

