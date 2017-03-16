// Drugie laboratorium
// Plik zawierajacy definicje klasy "tablica"

#ifndef tablica_hpp
#define tablica_hpp


class array {

	int *Array;                       // wskaznik na tablice
	unsigned int Size;                // rozmiar tablicy
	
	int extend_array(unsigned int New_size);
	int reduce_array();
	
	
	public:
	
	array(unsigned int Number);
	~array();
	int write_elem(unsigned int Index, int Value);
	int read_elem(unsigned int Index);
		
};


// Konstruktor inicjujacy tablice poczatkowa
array::array(unsigned int Number) {
	
	Size = Number;
	Array = new int[Number];
	
}

// Destruktor
array::~array() {
	
	std::cout << "Rozmiar: " << Size << "\n";
	delete [] Array;
	
}

// Funkcja powiekszajaca tablice
int array::extend_array(unsigned int New_size) {
	
	int *Buffor = new int[New_size];
	
	for (int i = 0; i < Size; ++i) {
		Buffor[i] = Array[i];
	}
	
	Size = New_size;
	delete [] Array;
	Array = Buffor;
	Buffor = NULL;
	
}

// Funkcja zapisujaca element do tablicy, gdy nie ma miejsca wywoluje
// funkcje powiekszajaca tablice
// UWAGA! Zaleznosc miedzy nowym a starym rozmiarem wpisac zgodnie
// z przyjetym algorytmem
int array::write_elem(unsigned int Index, int Value) {
	
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
int array::read_elem(unsigned int Index) {
	
	if (Index < Size) {
		return Array[Index];
	}
	else {
		std::cout << "Bledny indeks tablicy!\n";
		return 0;
	}
	
}


#endif
