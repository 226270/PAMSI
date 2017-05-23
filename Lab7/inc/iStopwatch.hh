// Definicja interfejsu iStopwatch

#ifndef ISTOPWATCH_HH
#define ISTOPWATCH_HH

#include <iostream>
#include <ctime>
#include "iRunnable.hh"

#define LENGTH 5



class iStopwatch {
	
public:

	virtual void measureTime(iRunnable&) = 0;
	virtual void countAverage() = 0;
	virtual double readAverage() = 0;

};


#endif
