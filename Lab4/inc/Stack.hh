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
	int find(int);
	int top();
	unsigned long int size();
	void push(int);
	void pop();
	void doAlgorithm(unsigned long int);
	void neutralise();

};

#endif
