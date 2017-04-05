// Definicja klasy Stack


#ifndef STACK_HH
#define STACK_HH

#include <iostream>
#include "iStack.hh"
#include "iRunnable.hh"
#include "Element.hh"


class Stack : public iStack, public iRunnable {
	
	unsigned long int _size = 0;
	Element *_pTop = NULL;

public:

	~Stack();
	virtual int find(int);
	virtual int top();
	virtual unsigned long int size();
	virtual void push(int);
	virtual void pop();
	virtual void doAlgorithm(unsigned long int);
	virtual void neutralise();

};

#endif
