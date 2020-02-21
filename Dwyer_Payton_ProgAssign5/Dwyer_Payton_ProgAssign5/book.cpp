#include <cstdlib>
#include <iostream>
#include "book.h"

//book class that defines the getters and setters for a book
//defines all of the constructors
//handles the functions for changing book availability

std::string Book::getTitle() {
	return Title;
}
void Book::setTitle(std::string title) {
	Title = title;
}

int Book::getbookID() {
	return bookID;
}
void Book::setbookID(int bookid) {
	bookID = bookid;
}

bool Book::isCheckedOut() {
	return checkedOut;
}

Book::Book() {
	Title = "No Title";
	bookID = rand() % 100 + 1;
	checkedOut = false;
}
Book::Book(std::string title, int bookid, bool checked) {
	Title = title;
	bookID = bookid;
	checkedOut = checked;
}
Book::Book(const Book& bookObj) {
	Title = bookObj.Title;
	bookID = bookObj.bookID;
	checkedOut = bookObj.checkedOut;
}


void Book::borrowBook() {
	if (isCheckedOut() == true) {
		std::cout << "This book has been checked out and is temporarily unavailable." << std::endl;
	}
	else {
		checkedOut = true;
	}
}

void Book::returnBook() {
	checkedOut = false;
}
std::string Book::bookStatus() {
	std::string avaiable = "Book is available";
	std::string unavailable = "Book is not available";
	if (isCheckedOut() == false) {
		return avaiable;
	}
	else {
		return unavailable;
	}
}