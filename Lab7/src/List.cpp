#include "List.hh"

// Konstruktor
List::List() {

	_size = 0;
	_pBegin = NULL;

}

// Destruktor
List::~List() {

	for(unsigned long int i = 0; i < _size; ++i) {

		remove(0);

	}

}

unsigned long int List::size() {

	return _size;

}

// Tylko na poczatek!
void List::add(std::string key, std::string data) {

	Element *newElement = new Element(key, data, _pBegin);
	_pBegin = newElement;
	++_size;

}

// Tylko pierwszy!
void List::remove(unsigned long int position) {

	if(_pBegin != NULL) {

		Element *temp;
		temp = _pBegin;
		_pBegin = _pBegin->readPointer();
		delete temp;
		--_size;

	}

	else {

		std::cout << "BLAD! Lista jest pusta.\n";
	
	}

}

std::string List::get(std::string key) {

	Element *p = _pBegin;
	unsigned long int help = 0;

	while(key != p->readKey() && help < _size) {

		p = p->readPointer();
		++help;

	}

	if(help == _size) {
	
		std::cout << "BLAD! Nie ma takiego klucza.";
		return 0;
	
	}

	return p->readData();

}
