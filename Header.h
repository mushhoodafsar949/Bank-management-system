
class Account
{
private:
	double balance;
	double interestRate;
	double interest;
	int transaction;
public:
	Account();
	void setinterestRate(double i);
	void makeDeposit(double d);
	void withdraw(double w);
	void calcinterest();
	double getBalance();
	double getInterest();
	double getinteresRate();
	int getTracsactions();
};


