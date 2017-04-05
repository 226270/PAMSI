#include "Stack.hh"



// Konstruktor
Element::Element(int num1, Element p) {

	_amount = num1;
	_pPrev = &p;

}

//Destruktor
Element::~Element() {

	delete _pPrev;

}

// Funkcja dostepu do wartosci
int Element::readElement() {

	return _amount;

}



// Destruktor
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

//	if(!_pTop) {
//
//		Element *temp;
//		temp = _pTop;
//		_pTop = _pTop.(_pPrev);
//		delete temp;
//
//	}
//
//	else {
//
//		std::cout << "BLAD! Stos jest pusty.";
//	
//	}

}

// Algorytm
void Stack::doAlgorithm(unsigned int amount) {

	for(unsigned int i = 0; i < amount; ++i) {

		push(i);

	}

}

// Zerowanie
void Stack::neutralise() {

	_size = 0;
	delete _pTop;
	_pTop = NULL;

}