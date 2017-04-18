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
	int help;
//	int pivot = _pArray[(begin+end)/2];
	int pivot = _pArray[end];


	while(1) {

		while(_pArray[++left] < pivot);

		while(_pArray[--right] > pivot);

		if(left <= right) {
			help = _pArray[left];
			_pArray[left] = _pArray[right];
			_pArray[right] = help;
		}

		else {
			break;
		}
	}

	if(right > begin) {
		quicksort(begin, right);
	}

	if(left < end) {
		quicksort(left, end);
	}

}

void Array::fillIncrease() {

	for(unsigned int i = 0; i < _size; ++i) {
		_pArray[i] = i+1;
	}

}

void Array::fillDecrease() {

	for(unsigned int i = 0; i < _size; ++i) {
		_pArray[i] = _size-i;
	}

}

void Array::fillRandom() {

	for(unsigned int i = 0; i < _size; ++i) {
		_pArray[i] = std::rand() % _size+5;
	}

}

// Funkcja wykonujaca algorytm dla zadanej wielkosci problemu
void Array::doAlgorithm(unsigned int amount) {

	switch(amount) {
		case(1):
			fillIncrease();
			break;
		case(2):
			fillDecrease();
			break;
		case(3):
			fillRandom();
			break;
		default:
			std::cout << "Blad!\n";
			break;
	}

//	std::cout << "Twoja tablica przed sortowaniem:\n";
//	for(unsigned int i = 0; i < _size; ++i) {
//		std::cout << readElem(i) << " ";
//	}
//	std::cout << std::endl;


	for (unsigned int i = 0; i < amount; ++i) {
		quicksort(0, _size-1);
	}


//	std::cout << "Twoja tablica po sortowaniu:\n";
//	for(unsigned int i = 0; i < _size; ++i) {
//		std::cout << readElem(i) << " ";
//	}
//	std::cout << std::endl;

}

// Funkcja zerujaca obiekt do stanu poczatkowego
void Array::neutralise() {

	delete [] _pArray;
	_pArray = new int[_size]; 

}
