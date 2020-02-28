#include <iostream>
#include <string>
#include "book.h"

int main()
{

	std::string userTitle;
	int userBookId;

	Book bookLibrary[5];

	//loop for assigning the title and book ID for each of the books
	for (int i = 0; i < 5; i++) {
		std::cout << "Enter a title for book " << i+1 << ": ";
		getline(std::cin, userTitle);
		bookLibrary[i].setTitle(userTitle);
		int randID = rand() % 1000 + 1;
		bookLibrary[i].setbookID(randID);
	}
	//tests the overloaded = operator
	bookLibrary[0] = bookLibrary[1];

	//tests the overloaded + operator
	bookLibrary[3] = bookLibrary[1] + bookLibrary[2];

	//tests the overloaded - operator
	bookLibrary[4] = bookLibrary[1] - bookLibrary[2];
	
	//loop for printing each book's attributes formatted
	for (int i = 0; i < 5; i++) {
		std::cout << "Book " << i+1 << std::endl;
		std::cout << "Title: " << bookLibrary[i].getTitle() << std::endl;
		std::cout << "Book ID: " << bookLibrary[i].getbookID() << std::endl;
		std::cout << std::endl;
	}
}