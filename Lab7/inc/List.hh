// Definicja klasy List

#ifndef LIST_HH
#define LIST_HH

#include "iList.hh"
#include "Element.hh"


class List : public iList {
	
	unsigned long int _size;
	Element *_pBegin;


public:
	
	List();
	~List();
	unsigned long int size();
	void add(std::string, std::string);
	void remove();
	std::string get(std::string);

};


#endif
