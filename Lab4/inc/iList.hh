// Definicja interfejsu iList

#ifndef ILIST_HH
#define ILIST_HH

#include <iostream>


class iList {
	
public:

	void add(int Element, int Position);
	void remove(int Position);
	int get(int Position);
	int size();
	int find(int ID);
	
};


#endif