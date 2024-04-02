#include<iostream>
#include<string>
using namespace std;

class Person {
	string name;
	string address;
	string tel;
public:
	Person(string n,string ad,string t):name(n),address(ad),tel(t){}
	string getName() { return name; }
	string getAddress() { return address; }
	string getTel() { return tel; }
	void setName(string n) { name = n; }
	void setAddress(string ad) { address = ad; }
	void setTel(string tel) { this->tel = tel; }
	void print() {
		cout <<"이름: " << getName() << endl;
		cout << "주소: " << getAddress() << endl;
		cout << "전화번호: " << getTel() << endl;
	}
};
class Customer :public Person {
	int id;
	int mileage;
public:
	Customer(string n, string ad, string t, int id, int m) :Person(n, ad, t), id(id), mileage(m) {}
	int getId() { return id; }
	int getMileage(){ return mileage; }
	void setId(int id) { this->id = id; }
	void setMileage(int m) { mileage = m; }
	void print() {
		Person::print();
		cout << "아이디: " << getId() << endl;
		cout << "마일리지: " << getMileage() << endl;
	}


};
int main4() {
	Customer c("김철수", "서울시 종로구", "010-1111-2222", 1, 1000);
	c.print();
	return 0;
}