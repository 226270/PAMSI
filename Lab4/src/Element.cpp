#include "Element.hh"


// Konstruktor
Element::Element(int num, Element* p) {

	_amount = num;
	_pPrev = p;

}

//Destruktor
Element::~Element() {

	delete _pPrev;

}

// Funkcja dostepu do wartosci
int Element::readElement() {

	return _amount;

}

// Funkcja dostepu do wskaznika
Element* Element::readPointer() {

	return _pPrev;

}