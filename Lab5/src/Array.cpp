#include "Array.hh"


// Konstruktor inicjujacy tablice poczatkowa
Array::Array(unsigned int number) {
	
	_size = number;
	_pArray = new int[number];
	
}

// Destruktor
Array::~Array() {
	
	delete [] _pArray;
	
}

// Funkcja powiekszajaca tablice
void Array::extendArray(unsigned int amount) {
	
	int *pBuffor = new int[amount];
	
	for (unsigned int i = 0; i < _size; ++i) {
		pBuffor[i] = _pArray[i];
	}
	
	_size = amount;
	delete [] _pArray;
	_pArray = pBuffor;
	pBuffor = NULL;
	
}

// Funkcja zapisujaca element do tablicy, gdy nie ma miejsca wywoluje
// funkcje powiekszajaca tablice
// UWAGA! Zaleznosc miedzy nowym a starym rozmiarem wpisac zgodnie
// z przyjetym algorytmem
void Array::writeElem(unsigned int index, int value) {
	
	if (index < _size) {
		_pArray[index] = value;
	}
	else {
		extendArray(_size+1);
		_pArray[index] = value;
	}
	
}

// Funkcja zwracajaca element tablicy, jesli takiego nie ma wyswietla
// odpowiedni komunikat
int Array::readElem(unsigned int index) {
	
	if (index < _size) {
		return _pArray[index];
	}
	else {
		std::cout << "Bledny indeks tablicy!\n";
		return 0;
	}
	
}

// Quicksort
void Array::quicksort(int begin, int end) {

	if(end <= begin) {
		return;
	}

	int left = begin-1;
	int right = end+1;
	int pivot = _pArray[(begin+end)/2];
	int help;

	while(1) {

		while(_pArray[++left] < pivot) {}

		while(_pArray[--right] > pivot) {}

		if(left < right) {
			help = _pArray[left];
			_pArray[left] = _pArray[right];
			_pArray[right] = help;
			++left;
			--right;
		}

		else {
			break;
		}

	}

	if(left < end) {
		std::cout<<"p";
		quicksort(left, end);
	}
	if(right > begin) {
		quicksort(begin, right);
	}

}

// Funkcja wykonujaca algorytm dla zadanej wielkosci problemu
void Array::doAlgorithm(unsigned long int amount) {

	for (unsigned int i = 0; i < amount; ++i) {

		writeElem(i, VALUE);

	}

}

// Funkcja zerujaca obiekt do stanu poczatkowego
void Array::neutralise() {

	delete [] _pArray;
	_size = START;
	_pArray = new int[_size]; 

}
