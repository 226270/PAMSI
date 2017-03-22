// Definicja klasy TABLICA
// Klasa dziedziczy po klasie WYKONYWALNY

#ifndef TABLICA_HH
#define TABLICA_HH

#include "wykonywalny.hh"


class array : public runnable {
	
	int *Array;                       // wskaznik na tablice
	unsigned int Size;                // rozmiar tablicy

	int extend_array(unsigned int Amount);

public:
	
	array(unsigned int Number);
	virtual ~array();
	virtual void writeElem(unsigned int Index, int Value);
	virtual int readElem(unsigned int Index);
	virtual void doAlgorithm(unsigned int Amount);
	virtual void neutralise();

};


#endif
