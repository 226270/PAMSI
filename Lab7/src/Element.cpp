#include "Element.hh"


// Konstruktor
Element::Element(std::string key, std::string data) {

	_key = key;
	_data = data;
	_pNext = NULL;

}

//Destruktor
Element::~Element() {

	delete _pNext;

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
Element * Element::readPointer() {

	return _pNext;

}
