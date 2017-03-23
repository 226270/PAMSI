// Definicja klasy STOPER
// Sluzy do pomiaru czasu pracy algorytmu oraz wyliczenia sredniego czasu

#ifndef STOPER_HH
#define STOPER_HH

#include <ctime>
#include "tablica.hh"


class stopwatch {

	unsigned int Amount;               // rozmiar problemu
	unsigned int Repeat;               // ilosc pomiarow
	double AverageTime;                // sredni czas
	double *pTime = NULL;              // tablica do zapisu czasow
	
public:

	~stopwatch();
	void measureTime(runnable &Item, unsigned int Num1, unsigned int Num2);
	void countAverage();
	double readAverage();

};


#endif
