// Definicja klasy WYKONYWALNY
// Interfejs dla obiektow, ktorych czas wykonania algorytmow mozna zmierzyc

#ifndef WYKONYWALNY_HH
#define WYKONYWALNY_HH

#include <iostream>

#define START 10                       // poczatkowy rozmiar tablicy
#define VALUE 1                        // wartosc wypelnienia

class runnable {
	
public:
	
	runnable();
	virtual ~runnable();
	virtual void writeElem(unsigned int Index, int Value);
	virtual int readElem(unsigned int Index);
	virtual void doAlgorithm(unsigned int Amount);
	virtual void neutralise();
	
};


#endif
