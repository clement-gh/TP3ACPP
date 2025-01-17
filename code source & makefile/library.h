#pragma once
#include "borrow.h"


namespace library {
	class Library
	{
	private:
		std::vector<book::Book> _listofbooks = {};
		std::vector<reader::Reader> _listofreaders = {};
		std::vector<author::Author> _listofauthors = {};
		std::vector<borrow::Borrow> _listofborrow = {};


	public:
		Library(std::vector<book::Book> listofbooks, std::vector<reader::Reader> listofreaders,
			std::vector<author::Author> listofauthors, std::vector<borrow::Borrow> listofborrow);
		



		//getteur setteur de la liste de livres
		std::vector<book::Book> getlistofbooks() const;
		void addlistofbooks(book::Book book);
		void setlistbook(std::vector<book::Book> & list);  //permet de rajouter � la suite du vector un autre vecteur , gain de temps � la cr�ation de la library

		//getteur setteur de la liste de lecteurs
		std::vector<reader::Reader> getlistofreaders() const;
		void addlistofreaders(reader::Reader reader);
		void setlistreader(std::vector<reader::Reader> list);  //permet de rajouter � la suite du vector un autre vecteur , gain de temps � la cr�ation de la library

		//getteur setteur de la liste d'auteurs
		std::vector<author::Author> getlistofauthors() const;
		void addlistofauthors(author::Author author);
		void setlistauthor(std::vector < author::Author > list);  //permet de rajouter � la suite du vector un autre vecteur , gain de temps � la cr�ation de la library


		//getteur setteur de la liste d'emprunts
		std::vector<borrow::Borrow> getlistofborrow() const ;
		void addlistofborrow(borrow::Borrow borrow);
		void delborrow(book::Book b);
		void borrowbook(book::Book& b, date::Date d, reader::Reader& r);
		void restorebook(book::Book& b, reader::Reader& r);

		//fonctions permettant d'afficher les diff�rentes listes
		void printlistborrow();
		void printlistreader();
		void printlistauthor();
		void printlistbook();

		//fonctions supl�mentaires
		void allbookofanauthor(author::Author a);
		//double percentageofborrowedbooks()const;
		void allbooksborrowed(reader::Reader r);
		void rankingofreader();
		void percentageofborrowedbooks();
		
	};

	std::ostream& operator<<(std::ostream& os, const std::vector<borrow::Borrow> &vect);
	std::ostream& operator<<(std::ostream& os, const std::vector<reader::Reader>& vect);
	std::ostream& operator<<(std::ostream& os, const std::vector<author::Author>& vect);
	std::ostream& operator<<(std::ostream& os, const std::vector<book::Book>& vect);
};
	
