#pragma once
#include <iostream>
#include <string>
#include "book.h"



#ifndef READER_H
#define READER_H
namespace reader {
class Reader
{
private:

	std::string _firstname;// Pr�nom
	std::string _surname; //Nom
	std::string _id;
	std::vector<int> _borrowedbooks;
	int _numberofborrowingbook =0 ;

public:
	Reader(std::string firstname, std::string surname);
	int getumberofborrowingbook()const;
	void setumberofborrowingbook(int number);

	std::string getfirstname()const;
	std::string getsurname()const;
	std::string getid()const;
	void setid();
	std::vector<int> getlistborrowedbook();
	void addlistborrowedbook(int isbnbook); //ajout livre dans la liste

	
};
std::ostream& operator<<(std::ostream& os, Reader& r);
};

#endif