// Definicja interfejsu iList

#ifndef ILIST_HH
#define ILIST_HH

#include <iostream>


class iList {
	
public:

	virtual void add(int, unsigned long int) = 0;
	virtual void remove(unsigned long int) = 0;
	virtual int get(unsigned long int) = 0;
	virtual unsigned long int size() = 0;
	virtual int find(int) = 0;
	
};


#endif