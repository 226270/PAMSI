#include "tablica.hh"


// Konstruktor inicjujacy tablice poczatkowa
array::array(unsigned int Number) {
	
	Size = Number;
	Array = new int[Number];
	
}

// Destruktor
array::~array() {
	
	delete [] Array;
	
}

// Funkcja powiekszajaca tablice
int array::extend_array(unsigned int Amount) {
	
	int *Buffor = new int[Amount];
	
	for (int i = 0; i < Size; ++i) {
		Buffor[i] = Array[i];
	}
	
	Size = Amount;
	delete [] Array;
	Array = Buffor;
	Buffor = NULL;
	
}

// Funkcja zapisujaca element do tablicy, gdy nie ma miejsca wywoluje
// funkcje powiekszajaca tablice
// UWAGA! Zaleznosc miedzy nowym a starym rozmiarem wpisac zgodnie
// z przyjetym algorytmem
int array::writeElem(unsigned int Index, int Value) {
	
	if (Index < Size) {
		Array[Index] = Value;
		return 0;
	}
	else {
		extend_array(Size+1);
		Array[Index] = Value;
		return 0;
	}
	
}

// Funkcja zwracajaca element tablicy, jesli takiego nie ma wyswietla
// odpowiedni komunikat
int array::readElem(unsigned int Index) {
	
	if (Index < Size) {
		return Array[Index];
	}
	else {
		std::cout << "Bledny indeks tablicy!\n";
		return 0;
	}
	
}


void array::doAlgorithm(unsigned int Amount) {

	for (int i = 0; i < Amount; ++i) {

		writeElem(i, VALUE);

	}

}

void array::neutralise() {

	Size = START;
	delete [] Array;
	Array = new int[Size]; 

}
