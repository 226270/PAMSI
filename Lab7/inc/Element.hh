// Definicja klasy Element

#ifndef ELEMENT_HH
#define ELEMENT_HH

#include <iostream>


class Element {

	std::string _key;
	std::string _data;
	Element *_pPrev;

public:

	Element(std::string, std::string, Element*);
	~Element();
	std::string readKey();
	std::string readData();
	Element* readPointer();

};

#endif
