#include "Queue.hh"

// Destruktor
Queue::~Queue() {

	delete _pBegin;
	delete _pEnd;

}

unsigned long int Queue::size() {

	return _size;

}

void Queue::enqueue(int element) {

	Element *newElement = new Element(element, _pBegin);
	_pBegin = newElement;
	++_size;

	if(_pEnd == NULL) {

		_pEnd = newElement;

	}
	
}


void Queue::dequeue() {

	unsigned long int help = 1;
	Element *p = _pBegin;

	if(_pBegin != NULL) {
		
		while(help < _size) {

			p = p->readPointer();
			++help;

		}

		Element *temp;
		temp = _pEnd;
		_pEnd = p;
		delete temp;
		--_size;

	}

	else {

		std::cout << "BLAD! Kolejka jest pusta.\n";
	
	}

}

// Funkcja wyszukujaca
int Queue::find(int num) {

	unsigned long int help = 0;

	do{

		++help;
		if(_pEnd->readElement() == num) {

			return help;

		}

		else {

			dequeue();

		}

	} while(help < _size);

	return help;

}

// Algorytm
void Queue::doAlgorithm(unsigned long int amount) {

	enqueue(0);

	for(unsigned long int i = 1; i < amount; ++i) {

		enqueue(1);

	}

	std::cout << std::endl;// << find(0) << std::endl;

}

void Queue::neutralise() {

	delete _pBegin;
	delete _pEnd;
	_pBegin = NULL;
	_pEnd = NULL;
	_size = 0;

}