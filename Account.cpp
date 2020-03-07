#include "Account.h"

std::string Account::getAccountOwner() {
	return Owner;
}
int Account::getAccountNum() {
	return AccountNum;
}
double Account::getAccountBalance() {
	return AccountBalance;
}

//setter definitions for account class
void Account::setAccountOwner(std::string owner) {
	Owner = owner;
}
void Account::setAccountNum(int n) {
	AccountNum = n;
}
void Account::setAccountBalance(double b) {
	AccountBalance = b;
}

//constructors default and non default
Account::Account() {
	Owner = "";
	AccountNum = 0;
	AccountBalance = 0.0;
}
Account::Account(std::string name, int n, double b) {
	Owner = name;
	AccountNum = n;
	AccountBalance = b;
}

//Checking account class definitions
void CheckingAccount::deposit(double amount) {
	AccountBalance += amount;
}

void CheckingAccount::withdraw(double amount) {
	AccountBalance -= amount;
}
CheckingAccount::CheckingAccount(std::string name, int n, double b) : Account(name, n, b) {
	Owner = name;
	AccountNum = n;
	AccountBalance = b;
}
//loan account class definitions
double LoanAccount::getInterest() {
	return intRate;
}
void LoanAccount::setInterest(double interest) {
	intRate = interest;
}
void LoanAccount::payBalance(double amount) {
	AccountBalance -= amount;
}
void LoanAccount::calcInterest() {
	float in = intRate * AccountBalance;
	AccountBalance -= in;
}
LoanAccount::LoanAccount(std::string name, int n, double interest, double b) : Account(name, n, b) {
	Owner = name;
	AccountNum = n;
	AccountBalance = b;
	intRate = interest;
}