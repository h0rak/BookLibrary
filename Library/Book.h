#pragma once
#include <iostream>
#include <iomanip>
#include "BookType.hpp"
using std::string
using std::cout
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
	Book();
	
}

