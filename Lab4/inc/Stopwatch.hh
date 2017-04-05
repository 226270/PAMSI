// Definicja klasy Stopwatch
// Sluzy do pomiaru czasu pracy algorytmu oraz wyliczenia sredniego czasu

#ifndef STOPWATCH_HH
#define STOPWATCH_HH

#include <iostream>
#include <ctime>
#include "iStopwatch.hh"
#include "iRunnable.hh"


class Stopwatch : public iStopwatch {

	unsigned int _amount;               // rozmiar problemu
	unsigned int _repeat;               // ilosc pomiarow
	double _averageTime;                // sredni czas
	double *_pTime = NULL;              // tablica do zapisu czasow
	
public:

	Stopwatch(unsigned int, unsigned int);
	virtual ~Stopwatch();
	virtual void measureTime(iRunnable&);
	virtual void countAverage();
	virtual double readAverage();

};


#endif
