#include "AssocArray.hh"


// Konstruktor inicjujacy tablice poczatkowa
AssocArray::AssocArray() {
	
	_size = START;
	_pAssocArray = new List*[_size];
	
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
int AssocArray::hashElem(std::string key) {

	int h = 0;

	for(unsigned int i = 0; i < key.length(); ++i) {
		h += (int)key[i];
	}

	return h % 31;

}

// Funkcja dodajaca element
void AssocArray::addElem(std::string key, std::string data) {

	int hash = hashElem(key);
	_pAssocArray[hash]->add(key, data);
	++_size;

}

// Funkcja czytajaca element
std::string AssocArray::readElem(std::string key) {

	int hash = hashElem(key);
	return _pAssocArray[hash]->get(key);

}

// Funkcja wykonujaca algorytm dla zadanej wielkosci problemu
void AssocArray::doAlgorithm(unsigned int amount) {


}

// Funkcja zerujaca obiekt do stanu poczatkowego
void AssocArray::neutralise() {

	delete [] _pAssocArray;
	_pAssocArray = new List*[_size]; 

}
