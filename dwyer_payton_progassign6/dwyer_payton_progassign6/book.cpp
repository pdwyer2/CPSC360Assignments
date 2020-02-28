#include <cstdlib>
#include <iostream>
#include <string>
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

//definition for overloading =
Book Book::operator=(const Book& right) {
	Title = right.Title;
	bookID = right.bookID;
	checkedOut = right.checkedOut;
	return *this;
}

//definition for overloading +
Book Book::operator+(const Book& right) {
	Book temp;
	temp.Title = Title + ", " + right.Title;
	temp.bookID = rand() % 1000 + 1;
	return temp;
}

 //definition for overloading -
Book Book::operator-(Book& right) {
	Title = right.Title;
	bookID = right.bookID;
	checkedOut = right.checkedOut;
	right.setTitle("No Title");
	right.setbookID(0);
	return *this;
}