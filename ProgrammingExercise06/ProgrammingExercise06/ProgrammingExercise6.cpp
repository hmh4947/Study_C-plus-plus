#include<iostream>
#include<vector>
using namespace std;
class Contact {
public:
	string name;
	string tel;

	Contact(string n, string t) :name(n), tel(t) {}
	Contact() {
		name = "";
		tel = "";
	}
	void print() {
		cout << "전화번호: " << tel << endl;

	}
};
int main6() {
	string name, tel,n;
	vector<Contact> contacts;

	for(int i=0; i<3;i++)
	{
		cout << "이름을 입력하시오: ";
		cin >> name;
		cin.ignore();
		cout << "전화번호를 입력하시오: ";
		cin >> tel;
		cin.ignore();
		contacts.push_back(Contact(name, tel));
	}
	
	cout << "탐색하고 싶은 이름을 입력하시오: ";
	cin>> n;
	for (auto& c : contacts) {
		if (c.name == n) {
			
			c.print();
		}
	}
	return 0;
}