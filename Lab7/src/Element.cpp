#include "Element.hh"


// Konstruktor
Element::Element(std::string key, std::string data, Element* prev) {

	_key = key;
	_data = data;
	_pPrev = prev;

}

//Destruktor
Element::~Element() {

	delete _pPrev;

}

// Funkcja dostepu do klucza
std::string Element::readKey() {

	return _key;

}

// Funkcja dostepu do danych
std::string Element::readData() {

	return _data;

}

// Funkcja dostepu do wskaznika
Element* Element::readPointer() {

	return _pPrev;

}
