#include<iostream>
using namespace std;

class BankAccount {
	string number;
	int balance;
public:
	void init(string n, int b);
	void deposit(int amount);
	void withdraw(int amount);
	void print();
};

void BankAccount::init(string n, int b)
{
	number = n;
	balance = b;

}

void BankAccount::deposit(int amount)
{
	balance += amount;

}

void BankAccount::withdraw(int amount)
{
	balance -= amount;
}

void BankAccount::print()
{
	cout << "ÇöÀç ÀÜ¾×: " << balance << endl;
}

int main10() {
	BankAccount myAccount;
	myAccount.init("1234-5678", 1000000);
	myAccount.print();

	cout << "after deposit(1000000) ";
	myAccount.deposit(1000000);
	myAccount.print();

	cout << "after withdraw(1000000) ";
	myAccount.withdraw(1000000);
	myAccount.print();
	return 0;
}
