// Definicja klasy stack
// Klasa dziedziczy po interfejsie iStack

#ifndef STACK_HH
#define STACK_HH

#include "iStack.hh"
#include "iStopwatch.hh"


class stack : public iStack,
			: public iStopwatch {
	
	int Size;
	element *Top;

};


class element {

	int Amount;
	element *Prev;

};


#endif
