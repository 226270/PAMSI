// Definicja interfejsu iStack

#ifndef ISTACK_HH
#define ISTACK_HH

#include <iostream>


class iStack {
	
public:

	virtual void push(int Element) = 0;
	virtual void pop() = 0;
	virtual int size() = 0;
	
};


#endif