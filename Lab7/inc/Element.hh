// Definicja klasy Element

#ifndef ELEMENT_HH
#define ELEMENT_HH

#include <iostream>
#include <string>



class Element {

	std::string _key;
	std::string _data;

public:

	Element *_pNext;

	Element(std::string, std::string);
	~Element();
	std::string readKey();
	std::string readData();
	Element * readPointer();

};

#endif
