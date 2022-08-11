#include"Header.h"
#include<iostream>

using namespace std;

int main()
{
	Account account1;
	double var;
	cout << "*******\tThis Program does the Basic Workings of a Bank Account\t********\n";
	cout << "\nEnter the amount to be deposited: ";
	cin >> var;
	account1.makeDeposit(var);
	cout << "Enter the interest rate: ";
	cin >> var;
	account1.setinterestRate(var);
	int check=1;
	while (check > 0 && check < 7)
	{
		cout << "\nWhat you want to do ?\n";
		cout << "1. Balance Inquiry\n2. Cash Deposit\n3. Cash Withdraw\n4. Interest Rate\n5. Calculate Interest\n6. Transactions\n7. Quit\n";
		cin >> check;
		switch (check)
		{
		case 1:
		{
			cout << "\nThe balance of your account = " << account1.getBalance() << endl;
			break;
		}
		case 2:
		{
			cout << "\nEnter the amount to be deposited: ";
			cin >> var;
			account1.makeDeposit(var);
			break;
		}
		case 3:
		{
			cout << "\nEnter the amount to withdraw : ";
			cin >> var;
			account1.withdraw(var);
			break;
		}
		case 4:
		{
			cout << "\nInterest Rate= " << account1.getinteresRate() << endl;
			break;
		}
		case 5:
		{
			account1.calcinterest();
			cout << "\nInterest = " << account1.getInterest() << endl;
			break;
		}
		case 6:
		{
			cout << "\nTransactions = " << account1.getTracsactions() << endl;
			break;
		}
		case 7:
		{
			return 0;
		}
		default:
		{
			cout << "Invalid entry! Enter again: ";
			cin >> check;
		}
		}
	}
	
	system("pause");
}