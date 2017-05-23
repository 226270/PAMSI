#include "AssocArray.hh"


// Konstruktor inicjujacy tablice poczatkowa
AssocArray::AssocArray(unsigned int size) {
	
	_size = size;
	_pAssocArray = new List[_size];
	
}

// Funkcja zwracajaca rozmiar tablicy
unsigned int AssocArray::readSize() {

	return _size;
	
}

// Funkcja zrzucajaca litery klucza na int i liczaca modulo
int AssocArray::hashElem(std::string key) {

	int h = 0;
	float A = (sqrt(5)-1)/2;

// Następne linijki to pierwsza f. hashujaca
//	for(unsigned int i = 0; i < key.length(); ++i) {
//		h += (int)key[i];
//	}
//	h = h % _size;

// Następne linijki to druga f. hashujaca
	for(unsigned int i = 0; i < key.length(); ++i) {
		h += (int)key[i];
	}
	h = (int)( _size * ( (h * A) - floor(h * A) ) );

	return h;

}

// Funkcja dodajaca element
void AssocArray::addElem(std::string key, std::string data) {

	int hash = hashElem(key);

	_pAssocArray[hash].add(key, data);

}

// Funkcja czytajaca element
std::string AssocArray::readElem(std::string key) {

	int hash = hashElem(key);
	
	return _pAssocArray[hash].get(key);

}

// Funkcja wykonujaca algorytm dla zadanej wielkosci problemu
void AssocArray::doAlgorithm(std::string key) {

	std::cout << readElem("key");

}

// Funkcja zerujaca obiekt do stanu poczatkowego
void AssocArray::neutralise() {

//	delete [] _pAssocArray;
	_pAssocArray = new List[_size]; 

}
