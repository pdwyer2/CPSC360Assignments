#include <iostream>
#include <string>
#include "book.h"

int main()
{
	//Handles first book from user input
	std::cout << "Book 1..... " << std::endl;
	Book b1;

	std::string userTitle;
	int userBookId;

	std::cout << "Enter a title: " << std::endl;
	getline(std::cin, userTitle);
	b1.setTitle(userTitle);

	std::cout << "Enter a book ID: " << std::endl;
	std::cin >> userBookId;
	b1.setbookID(userBookId);

	std::cout << "Title: " << b1.getTitle() << std::endl;
	std::cout << "Book ID: " << b1.getbookID() << std::endl;
	std::cout << "Status: " << b1.bookStatus() << std::endl;

	b1.borrowBook();

	std::cout << "Title: " << b1.getTitle() << std::endl;
	std::cout << "Book ID: " << b1.getbookID() << std::endl;
	std::cout << "Status: " << b1.bookStatus() << std::endl;



	//handles second book with hardcoded values
	std::cout << "Book 2..... " << std::endl;

	Book b2("Strange Case of Dr Jekyll and Mr Hyde", 23, true);
	

	std::cout << "Title: " << b2.getTitle() << std::endl;
	std::cout << "Book ID: " << b2.getbookID() << std::endl;
	std::cout << "Status: " << b2.bookStatus() << std::endl;

	b2.returnBook();

	std::cout << "Title: " << b2.getTitle() << std::endl;
	std::cout << "Book ID: " << b2.getbookID() << std::endl;
	std::cout << "Status: " << b2.bookStatus() << std::endl;


	//handles third book with copy constructor
	std::cout << "Book 3....." << std::endl;

	Book b3(b2);

	std::cout << "Title: " << b3.getTitle() << std::endl;
	std::cout << "Book ID: " << b3.getbookID() << std::endl;
	std::cout << "Status: " << b3.bookStatus() << std::endl;
}
