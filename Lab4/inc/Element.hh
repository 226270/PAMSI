#ifndef ELEMENT_HH
#define ELEMENT_HH

#include <iostream>


class Element {

	int _amount = 0;
	Element *_pPrev = NULL;

public:

	Element(int, Element*);
	~Element();
	int readElement();
	Element* readPointer();

};

#endif