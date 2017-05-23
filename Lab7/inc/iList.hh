// Definicja interfejsu iList

#ifndef ILIST_HH
#define ILIST_HH

#include <iostream>
#include <string>



class iList {
	
public:

	virtual unsigned long int size() = 0;
	virtual void add(std::string, std::string) = 0;
	virtual void remove() = 0;
	virtual std::string get(std::string) = 0;
	
};


#endif