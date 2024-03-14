#include <iostream>
#include<string>
using namespace std;
class Book {
    string title;
    int price;
public:
    Book():title(""),price(0) {}
    Book(string t, int p) :title(t), price(p) {}
    void print();


};
void Book::print()
{
    cout << "제목: " << title << ",  가격: " << price << endl;
}
int main1()
{
    string tit;
    int pri;
    int i=0;
    Book books[10];
   
    for (Book& book : books)
    {
        i++;
        cout << "책 제목: ";
        cin >> tit;
        cout << "책 가격: ";
        cin >> pri;
        book = Book(tit, pri);
        if (i > 10) {
            break;
        }

    }
    cout << "소장하고 있는 책 정보" << endl;
    cout << "=================================" << endl;
    for(i=0; i<10;i++)
    {
       books[i].print();

    }
    cout << "=================================" << endl;
   
    return 0;
}
