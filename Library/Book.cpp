#include "Book.h"
Book::Book()
{
	/* No-Parameter Constructor: */
	this->bookID = "";
	this->title = "";
	this->author = "";
	for (int i = 0; i < priceArraySize; i++ ) this->prices[i] = 0;
	this->bookType = BookType::UNDECIDED;
}
Book::Book(string bookID, string title, string author, double prices[], BookType bookType)
{
	/* Regular Constructor: */
	this->bookID = bookID;
	this->title = title;
	this->author = author;
	for (int i = 0; i < priceArraySize; i++ ) this->prices[i] = prices[i];
	this->bookType = bookType;
}
Book::~Book() {
	/* Destructor: Purposefully does nothing */
}

string Book::getID() {return this->bookID;}
string Book::getTitle() {return this->title;}
string Book::getAuthor() {return this->author;}
double* Book::getPrices() {return this->prices;} // An array name IS a pointer!!
BookType Book::getBookType() {return this->bookType;}

void Book::setID(string ID) {this->bookID = ID;}
void Book::setTitle(string title) {this->title = title;}
void Book::setAuthor(string author) {this->author = author;}
void Book::setPrices(double prices[]) {
	for (int i = 0; i < priceArraySize; i++) {
		this->prices[i] = prices[i];
	}
}
void Book::setBookType(BookType bookType) {this->bookType = bookType;}

void Book::printHeader()
{
	std::cout << "Output Format: ID|Title|Author|Prices|Type\n";
}

void Book::print()
{
	std::cout << this->getID() << '\t';
	std::cout << this->getTitle() << '\t';
	std::cout << this->getAuthor() << '\t';
	std::cout << this->getPrices()[0] << ',';
	std::cout << this->getPrices()[1] << ',';
	std::cout << this->getPrices()[2] << '\t';
	std::cout << bookTypeStrings[this->getBookType()]  << '\n';
}
