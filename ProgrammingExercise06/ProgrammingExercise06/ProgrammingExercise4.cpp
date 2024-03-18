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
		cout << "발신자: " << sender << " ";
		cout << "수신자: " << receiver << " ";
		cout << "내용: " << text <<" " << endl;

	}
};
int main4() {
	string s, r, t;
	vector<SMS> v;

	for (int i = 0; i < 3; i++) {
		cout << "발신자를 입력하세요: ";
		cin >> s;
		cin.ignore();
		cout << "수신자를 입력하세요: ";
		cin >> r;
		cin.ignore();
		cout << "내용을 입력하세요: ";
		getline(cin, t);
		v.push_back(SMS(s, r, t));

	}
	for (SMS& sms : v) {
		sms.print();
	}
	return 0;
}