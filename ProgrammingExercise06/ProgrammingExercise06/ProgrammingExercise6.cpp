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
		cout << "��ȭ��ȣ: " << tel << endl;

	}
};
int main6() {
	string name, tel,n;
	vector<Contact> contacts;

	for(int i=0; i<3;i++)
	{
		cout << "�̸��� �Է��Ͻÿ�: ";
		cin >> name;
		cin.ignore();
		cout << "��ȭ��ȣ�� �Է��Ͻÿ�: ";
		cin >> tel;
		cin.ignore();
		contacts.push_back(Contact(name, tel));
	}
	
	cout << "Ž���ϰ� ���� �̸��� �Է��Ͻÿ�: ";
	cin>> n;
	for (auto& c : contacts) {
		if (c.name == n) {
			
			c.print();
		}
	}
	return 0;
}