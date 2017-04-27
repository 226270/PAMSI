#include "AssocArray.hh"


// Konstruktor inicjujacy tablice poczatkowa
AssocArray::AssocArray() {
	
	_size = START;
	_pAssocArray = new int[_size];
	
}

// Destruktor
AssocArray::~AssocArray() {
	
	delete [] _pAssocArray;
	
}

// Funkcja zwracajaca rozmiar tablicy
unsigned int AssocArray::readSize() {

	return _size;
	
}

// Funkcja zrzucajaca pierwsza litere klucza na int
int AssocArray::hashElem(std::string name) {

	return (int)name[0];

}

// Funkcja dodajaca element
void AssocArray::addElem(std::string key, std::string data) {

	_pAssocArray[hashElem(key)] = 0;

}

// Funkcja wykonujaca algorytm dla zadanej wielkosci problemu
void AssocArray::doAlgorithm(unsigned int amount) {


}

// Funkcja zerujaca obiekt do stanu poczatkowego
void AssocArray::neutralise() {

	delete [] _pAssocArray;
	_pAssocArray = new int[_size]; 

}
