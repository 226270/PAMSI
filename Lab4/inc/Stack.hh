// Definicja klasy Stack


#ifndef STACK_HH
#define STACK_HH

#include <iostream>
#include "iStack.hh"
#include "iRunnable.hh"


class Element {

	int _amount;
	Element *_pPrev = NULL;

public:

	Element(int, Element);
	~Element();
	int readElement();

};


class Stack : public iStack, public iRunnable {
	
	int _size;
	Element *_pTop = NULL;

public:

	~Stack();
	virtual int top();
	virtual int size();
	virtual void push(int);
	virtual void pop();
	virtual void doAlgorithm(unsigned int);
	virtual void neutralise();

};

#endif
