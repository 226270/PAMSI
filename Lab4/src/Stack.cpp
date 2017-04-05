#include "Stack.hh"


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



// Destruktor
Stack::~Stack() {

	delete _pTop;

}

// Funkcja wyszukujaca
int Stack::find(int num) {

	unsigned long int help = 0;

	do{

		++help;
		if(_pTop->readElement() == num) {

			return help;

		}

		else {

			pop();

		}

	} while(help < _size);

	return help;

}

// Funkcja zwracajaca wartosc gornego elementu
int Stack::top() {

	return _pTop->readElement();

}

// Funkcja zwracająca wielkosc stosu
int Stack::size() {

	return _size;

}

// Funkcja kladaca element na stosie
void Stack::push(int num) {

	Element *newElement = new Element(num, _pTop);
	_pTop = newElement;
	++_size;

}

// Funkcja sciagajaca element ze stosu
void Stack::pop() {

	if(_pTop != NULL) {

		Element *temp;
		temp = _pTop;
		_pTop = _pTop->readPointer();
		delete temp;

	}

	else {

		std::cout << "BLAD! Stos jest pusty.\n";
	
	}

}


// Algorytm
void Stack::doAlgorithm(unsigned long int amount) {

	push(0);

	for(unsigned long int i = 1; i < amount; ++i) {

		push(1);

	}

	std::cout << _size << std::endl;// << find(0) << std::endl;

}

// Zerowanie
void Stack::neutralise() {

	_size = 0;
	delete _pTop;
	_pTop = NULL;

}