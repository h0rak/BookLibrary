#pragma once
#include "Book.h"

#ifndef Repo_h
#define Repo_h

class Repo
{
public: /* Make public? */
	int lastIndex = -1;
	const static int numBooks = 5;
	Book* bookRepoArray[numBooks]; /* Not declared dynamically */
	
public:
	/* Note that the Repo has no constructor.. or does it? */
	/* The parse method goes through a set of commna delimited strings and extraccts the data of a book */
	void parse(string row);
	/* All book data is then passed into add method which creates the Book object and places it in the */
	void add(string ID,
			 string bTitle,
			 string bAuthor,
			 double price1,
			 double price2,
			 double price3,
			 BookType bookType);
	void printAll(); /* Just calls the print() method in Book class for each book */
	void printByBookType(BookType bookType); /* BookType is passed in */
	void printInvalidIDs(); /* Each book ID needs an underscore  and a lower/uppercase 'x' */
	void printAveragePrices(string bookID); /* All students with negative prices or average prices */
	void removeBookByID(string bookID); /* Find the book with supplied ID and remove */
	~Repo();
};


#endif /* Repo_h */
