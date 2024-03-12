#include<iostream>
using namespace std;

class BankAccount {
private:
	int balance;
	double rate;
public:
	BankAccount() {
		balance = 0;
		rate = 0.05;
	}
	BankAccount(int b, double r) {
		balance = b;
		rate = r;
	}
	int getBalance();
	void setBalance(int b);
	double getRate();
	void setRate(double r);
	int deposit(int b);
	int withdraw(int b);
	void print();
	
};

int BankAccount::getBalance()
{
	return balance;
}

void BankAccount::setBalance(int b)
{
	balance = b;
}

double BankAccount::getRate()
{
	return rate;
}

void BankAccount::setRate(double r)
{
	rate = r;
}

int BankAccount::deposit(int b)
{
	return balance += b;
}

int BankAccount::withdraw(int b)
{
	return balance -= b;

}

void BankAccount::print()
{
	cout << "ภÜพื: "<< balance << endl;
}

int main11() {
	BankAccount b(10000, 0);
	b.print();
	cout << "+5000" << endl;
	b.deposit(5000);
	b.print();
	cout << "-3000" << endl;
	b.withdraw(3000);
	b.print();
	return 0;
}
