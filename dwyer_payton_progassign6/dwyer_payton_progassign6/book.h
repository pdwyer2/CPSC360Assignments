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

	Book();
	Book(std::string title, int bookid, bool checked = false);
	Book(const Book& bookObj);

	//overload the equals operator
	//book[i] = book[j]
	Book operator=(const Book&);

	//overload the plus operator
	//book[k] = book[i] + book[j]
	Book operator+(const Book&);
	
	//overload the minus operator
	//book[k] = book[i] + book[j]
	Book operator-(Book&);
};