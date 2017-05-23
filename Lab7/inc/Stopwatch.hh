// Definicja klasy Stopwatch
// Sluzy do pomiaru czasu pracy algorytmu oraz wyliczenia sredniego czasu

#ifndef STOPWATCH_HH
#define STOPWATCH_HH

#include "iStopwatch.hh"
#include "iRunnable.hh"



class Stopwatch : public iStopwatch {

	unsigned int _amount;          
	unsigned int _repeat;               // ilosc pomiarow
	double _averageTime;                // sredni czas
	double *_pTime = NULL;              // tablica do zapisu czasow
	
public:

	Stopwatch(unsigned long int, unsigned int);
	~Stopwatch();
	void measureTime(iRunnable&);
	void countAverage();
	double readAverage();

};


#endif
