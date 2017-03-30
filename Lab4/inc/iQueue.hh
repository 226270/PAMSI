// Definicja interfejsu iQueue

#ifndef IQUEUE_HH
#define IQUEUE_HH

#include <iostream>


class iQueue {
	
public:

	void add(int Element, int Position);
	void remove(int Position);
	int size();
	
};


#endif