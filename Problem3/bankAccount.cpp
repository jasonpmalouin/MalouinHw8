#include<string>
#include<iostream>
#include "bankAccount.h"
using namespace std;

BankAccount::BankAccount(string n, float bal)
{
	customerName = n;
	balance = bal;
}

string BankAccount::getName()
{
	return customerName;
}

float BankAccount::getBalance()
{
	return balance;
}

void BankAccount::deposit(float dep)
{
	if(dep > 0)
	{
	balance += dep;
	}else{
	cout << "Deposit For " << customerName << " Must Be A Positive Non-Zero Value" << endl;
	}
}

void BankAccount::withdraw(float draw)
{
	if(draw > 0)
	{
	balance -= draw;
	}else{
	cout << "Withdrawal For " << customerName << " Must Be A Positive Non-Zero Value" << endl;
	}
}

BankAccount::~BankAccount()
{
cout << "Destroying The Bank Account For: " << customerName << endl;
}
