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
	cout << "책 이름: " << title << endl;
	cout << "책 저자: " << author << endl;


}

int main4() {
	Book myBook;
	myBook.title = "Great C++";;
	myBook.author = "Bob";
	myBook.print();

	return 0;
}

