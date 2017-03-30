// Definicja klasy stack
// Klasa dziedziczy po interfejsie iStack

#ifndef STACK_HH
#define STACK_HH

#include "iStack.hh"
#include "iStopwatch.hh"


class stack : public iStack,
			: public iStopwatch {
	
	int Size;
	int *Top;

	unsigned int Repeat;               // ilosc pomiarow
	double AverageTime;                // sredni czas
	double *pTime;              // tablica do zapisu czasow
	clock_t Begin;
	clock_t End;

};


class element {

	int Amount;
	int *Prev;

};


#endif
