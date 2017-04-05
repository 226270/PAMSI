#include "List.hh"

// Destruktor
List::~List() {

	delete _pBegin;

}

unsigned long int List::size() {

	return _size;

}

// Tylko na poczatek!
void List::add(int element, unsigned long int position) {

	Element *newElement = new Element(element, _pBegin);
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

int List::get(unsigned long int position) {

	unsigned long int help = 0;
	int helpV;
	Element *p = _pBegin;

	while(help < position) {

		helpV = p->readElement();
		p = p->readPointer();
		++help;

	}

	return helpV;

}

// Funkcja wyszukujaca
int List::find(int num) {

	unsigned long int help = 0;
	int helpV;
	Element *p = _pBegin;

	do{

		++help;
		helpV = p->readElement();

		if(helpV == num) {

			return help;

		}

		else {

			p = p->readPointer();

		}

	} while(help < _size);

	return help;

}

// Algorytm
void List::doAlgorithm(unsigned long int amount) {

	add(0, 0);

	for(unsigned long int i = 1; i < amount; ++i) {

		add(1, 0);

	}

	std::cout << std::endl << find(0) << std::endl;

}

void List::neutralise() {

	delete _pBegin;
	_pBegin = NULL;
	_size = 0;

}