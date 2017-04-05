// Definicja klasy Stack


#ifndef STACK_HH
#define STACK_HH

#include <iostream>
#include "iStack.hh"
#include "iRunnable.hh"


class Element {

	int _amount = 0;
	Element *_pPrev = NULL;

public:

	Element(int, Element*);
	~Element();
	int readElement();
	Element* readPointer();

};


class Stack : public iStack, public iRunnable {
	
	unsigned long int _size = 0;
	Element *_pTop = NULL;

public:

	~Stack();
	int find(int);
	virtual int top();
	virtual int size();
	virtual void push(int);
	virtual void pop();
	virtual void doAlgorithm(unsigned long int);
	virtual void neutralise();

};

#endif
