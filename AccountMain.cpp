#include <iostream>
#include "Account.h"
#include <stdio.h>
#include <stdlib.h>
#include <string>

int main() {
	Account A1("Main Account", 001, 1659);
	CheckingAccount A2("Checking Account", 002, 238);
	LoanAccount A3("Loan Account", 003, .16, 16900);

	//Account Info
	std::cout << "Standard Account Info\nAccount Name: " << A1.getAccountOwner() << std::endl;
	std::cout << "Account Number: " << A1.getAccountNum() << std::endl;
	std::cout << "Balance: $" << A1.getAccountBalance() << "\n" << std::endl;

	//Checking Account Info
	std::cout << "Checking Account Info\nAccount Name: " << A2.getAccountOwner() << std::endl;
	std::cout << "Account Number: " << A2.getAccountNum() << std::endl;
	std::cout << "Balance: $" << A2.getAccountBalance() << std::endl;
	std::cout << "Withdraw $200\n";
	A2.withdraw(200);
	std::cout << "New Balance: $" << A2.getAccountBalance() << std::endl;
	std::cout << "Deposit $555...";
	A2.deposit(555);
	std::cout << "New Balance: $" << A2.getAccountBalance() << "\n" << std::endl;

	//Loan Account Info
	std::cout << "Loan Account Info\nAccount Name: " << A3.getAccountOwner() << std::endl;
	std::cout << "Account Number: " << A3.getAccountNum() << std::endl;
	std::cout << "Loan Balance: $" << A3.getAccountBalance() << std::endl;
	int interestPercent = A3.getInterest() * 100;
	std::cout << "Interest Rate: " << interestPercent << "%" << std::endl;
	std::cout << "Paying $2,568 off loan balance...";
	A3.payBalance(2568);
	std::cout << "New Loan Balance: $" << A3.getAccountBalance() << std::endl;
	std::cout << "Monthly interest added to the loan balance: $";
	A3.calcInterest();
	std::cout << A3.getAccountBalance() << std::endl;
}