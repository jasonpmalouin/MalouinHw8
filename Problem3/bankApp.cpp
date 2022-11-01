//Created By Jason Malouin
//Usage ./bankApp
#include<string>
#include<iostream>
#include "bankAccount.h"
using namespace std;

int main(int argc, char* argv[])
{
	BankAccount jackAccount("Jack Smith", 50);
	BankAccount jillAccount("Jill Brian", 100);
	BankAccount bankArray[3] = {BankAccount("Ralph Kramden", 10), BankAccount("Alice Kramden", 20), BankAccount("Ed Norton", 30)};

	jackAccount.deposit(30);
	jillAccount.deposit(30);
	bankArray[0].deposit(30);
	bankArray[1].deposit(30);
	bankArray[2].deposit(30);

	jackAccount.withdraw(20);
	jillAccount.withdraw(20);
	bankArray[0].withdraw(20);
	bankArray[1].withdraw(20);
	bankArray[2].withdraw(20);

	cout << "Account Name: " << jackAccount.getName() << ", Balance: " << jackAccount.getBalance() << endl;
	cout << "Account Name: " << jillAccount.getName() << ", Balance: " << jillAccount.getBalance() << endl;
	cout << "Account Name: " << bankArray[0].getName() << ", Balance : " << bankArray[0].getBalance() << endl;
	cout << "Account Name: " << bankArray[1].getName() << ", Balance : " << bankArray[1].getBalance() << endl;
	cout << "Account Name: " << bankArray[2].getName() << ", Balance : " << bankArray[2].getBalance() << endl;
}
