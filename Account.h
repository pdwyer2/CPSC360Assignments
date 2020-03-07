#ifndef ACCOUNT
#define ACCOUNT
#include <string>

//the base account class
class Account {
public:
	//getters for account class
	int getAccountNum();
	double getAccountBalance();
	std::string getAccountOwner();

	//setters for account class
	void setAccountOwner(std::string owner);
	void setAccountNum(int n);
	void setAccountBalance(double b);

	//constructors for account class
	Account();
	Account(std::string name, int n, double b);
	Account(const Account& right);

protected:
	std::string Owner;
	int AccountNum;
	double AccountBalance;
};

//checking account class inherits account
class CheckingAccount : public Account {
public:
	void deposit(double amount);
	void withdraw(double amount);
	CheckingAccount(std::string name, int n, double b);
};

//loan account class inherits account
class LoanAccount : public Account {
public:
	double getInterest();
	void setInterest(double interest);
	void payBalance(double amount);
	void calcInterest();
	LoanAccount(std::string name, int n, double interest, double b);

private:
	double intRate;
};
#endif