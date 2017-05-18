// Definicja interfejsu iList

#ifndef ILIST_HH
#define ILIST_HH

#include <iostream>


class iList {
	
public:

	virtual unsigned long int size() = 0;
	virtual void add(std::string, std::string) = 0;
	virtual void remove(unsigned long int) = 0;
	virtual std::string get(std::string) = 0;
	
};


#endif