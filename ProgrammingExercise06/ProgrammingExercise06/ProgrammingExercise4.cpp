#include<iostream>
#include<vector>
#include<string>
using namespace std;

class SMS {
	string sender;
	string receiver;
	string text;
public:
	SMS() {
		sender = "";
		receiver = "";
		text = "";

	}
	SMS(string s, string r, string t) :sender(s), receiver(r), text(t) {}
	void print() {
		cout << "�߽���: " << sender << " ";
		cout << "������: " << receiver << " ";
		cout << "����: " << text <<" " << endl;

	}
};
int main4() {
	string s, r, t;
	vector<SMS> v;

	for (int i = 0; i < 3; i++) {
		cout << "�߽��ڸ� �Է��ϼ���: ";
		cin >> s;
		cin.ignore();
		cout << "�����ڸ� �Է��ϼ���: ";
		cin >> r;
		cin.ignore();
		cout << "������ �Է��ϼ���: ";
		getline(cin, t);
		v.push_back(SMS(s, r, t));

	}
	for (SMS& sms : v) {
		sms.print();
	}
	return 0;
}