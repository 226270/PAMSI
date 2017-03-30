// Definicja interfejsu iList

#ifndef ILIST_HH
#define ILIST_HH

#include <iostream>


class iList {
	
public:

	virtual void add(int Element, int Position) = 0;
	virtual void remove(int Position) = 0;
	virtual int get(int Position) = 0;
	virtual int size() = 0;
	virtual int find(int ID) = 0;
	
};


#endif