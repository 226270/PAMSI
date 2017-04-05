#include "Stack.hh"



// Konstruktor
Element::Element(int num1, Element p) {

	_amount = num1;
	_pPrev = &p;

}

//Dekonstruktor
Element::~Element() {

	delete _pPrev;

}

// Funkcja dostepu do wartosci
int Element::readElement() {

	return _amount;

}



// Dekonstruktor
Stack::~Stack() {

	delete _pTop;

}

// Funkcja zwracajaca wartosc ostatniego elementu
int Stack::top() {

	return _pTop->readElement();

}

// Funkcja zwracająca wielkosc stosu
int Stack::size() {

	return _size;

}

// Funkcja kladaca element na stosie
void Stack::push(int num1) {

	Element top(num1, *_pTop);
	_pTop = &top;

}

// Funkcja sciagajaca elemnt ze stosu
void Stack::pop() {

	if(!_pTop) {

		Element *temp;
		temp = _pTop;
		_pTop = _pTop.(_pPrev);
		delete temp;

	}

	else {

		std::cout << "BLAD! Stos jest pusty.";
	
	}

}

