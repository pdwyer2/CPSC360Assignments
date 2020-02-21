#include <string>
#include <iostream>

//header file that includes getter and setter prototypes
//includes constructor prototypes
//also includes different functions for changing the availability of books


class Book {
private:
	std::string Title;
	int bookID;
	bool checkedOut;

public:
	std::string getTitle();
	void setTitle(std::string title);

	int getbookID();
	void setbookID(int bookid);

	bool isCheckedOut();

	void borrowBook();
	void returnBook();
	std::string bookStatus();

	Book();
	Book(std::string title, int bookid, bool checked = false);
	Book(const Book& bookObj);
};