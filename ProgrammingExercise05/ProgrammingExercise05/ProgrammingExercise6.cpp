#include<iostream>
using namespace std;

class SMS {
	string sender;
	string receiver;
	string text;
public:
	SMS(){
		sender = "";
		receiver = "";
		text = "";
	}
	SMS(string s,string r,string t):
	sender(s),receiver(r),text(t){}

	string getSender();
	void setSender(string s);
	string getReceiver();
	void setReceiver(string r);
	string getText();
	void setText(string t);
	void print();

};

string SMS::getSender()
{
	return sender;
}

void SMS::setSender(string s)
{
	sender = s;
}

string SMS::getReceiver()
{
	return receiver;
}

void SMS::setReceiver(string r)
{
	receiver = r;
}

string SMS::getText()
{
	return text;
}

void SMS::setText(string t)
{
	text = t;
}

void SMS::print()
{
	cout << "발신자: " << sender << " 수신자: " << receiver << " 내용: " << text << endl;
}

int main6() {
	cout << "문자메시지 #1" << endl;
	SMS sms1("010-1234-5678","010-1234-5679","C++공부는 잘되가나요?");
	sms1.print();
	printf("\n");
	cout << "문자메시지 #2" << endl;
	SMS sms2("010-1234-5679", "010-1234-5678", "네 5장까지는 문제 없네요.");
	sms2.print();
	return 0;
}
