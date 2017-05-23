#include "List.hh"


// Konstruktor
List::List() {

	_size = 0;
	_pBegin = NULL;

}

// Destruktor
List::~List() {

	for(unsigned long int i = 0; i < _size; ++i) {

		remove();

	}

}

// Funkcja dostepu do rozmiaru listy
unsigned long int List::size() {

	return _size;

}

// Funkcja dodawania elementu
// Tylko na koniec listy!
void List::add(std::string key, std::string data) {

	Element *newElement = new Element(key, data);

	if(_pBegin == NULL) {

		_pBegin = newElement;

	}
	
	else {

		Element *temp = _pBegin;

		while(temp->readPointer() != NULL) {
			temp = temp->readPointer();
		}

		temp->_pNext = newElement;

	}

	++_size;

}

// Funkcja usuwania elementu
// Tylko pierwszy element listy!
void List::remove() {

	if(_pBegin != NULL) {

		Element *temp;
		temp = _pBegin;
		_pBegin = _pBegin->readPointer();
		delete temp;
		--_size;

	}

	else {

		std::cout << "BLAD! Lista jest pusta!" << std::endl;

	}

}

// Funkcja dostepu do danych elementu
std::string List::get(std::string key) {

	Element *temp = _pBegin;
	unsigned long int help = 0;

	while(key != temp->readKey() && help < _size) {

		temp = temp->readPointer();
		++help;

	}

	if(help == _size) {
	
		std::cout << "BLAD! Nie ma takiego klucza.";
		return 0;
	
	}

	else {

		return temp->readData();

	}

}
