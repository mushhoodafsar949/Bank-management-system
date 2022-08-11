#include"Header.h"
#include<iostream>
using namespace std;


Account::Account()
{
	balance = 0;
	interestRate = 0.045;
	transaction = 0;
	interest = 0;
}

void Account::setinterestRate(double i)
{
	interestRate = i;
}

void Account::makeDeposit(double d)
{
	balance = balance + d;
	transaction++;
}

void Account::withdraw(double w)
{
	if (w < balance)
	{
		balance = balance - w;
		transaction++;
	}
	else
	{
		cout << "There is insufficient balance.\n";
	}
}

void Account::calcinterest()
{
	int years;
	cout << "Enter the years: ";
	cin >> years;
	interest = (balance * interestRate)*years;
	balance += interest;
}

double Account::getBalance()
{
	return balance;
}

double Account::getInterest()
{
	return interest;
}

double Account::getinteresRate()
{
	return interestRate;
}

int Account::getTracsactions()
{
	return transaction;
}