#pragma once
#include <iostream>
#include <iomanip>
#include "BookType.hpp"
using std::string;
using std::cout;
//using std::endl

class Book
{
public:
	const static int priceArraySize = 3;
private:
	string bookID;
	string title;
	string author;
	double prices[priceArraySize];
	BookType bookType;
public:
	Book(); // default constructor
	Book(string bookID, string title, string author, double prices[], BookType bookType); // regular constructor
	~Book(); // destructor
	
	// getters aka accessors
	string getID();
	string getTitle();
	string getAuthor();
	double* getPrices();
	BookType getBookType();
	
	// setters aka mutators
	void setID(string ID);
	void setTitle(string title);
	void setAuthor(string author);
	void setPrices(double prices[]);
	void setBookType(BookType bookType);
	
	static void printHeader(); // displays a header for the data to follow
	
	void print(); // displays 'this' book's (student's) data
};

