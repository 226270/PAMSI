// Definicja interfejsu iStopwatch

#ifndef ISTOPWATCH_HH
#define ISTOPWATCH_HH

#include <ctime>


class iStopwatch {
	
public:

	virtual void start() = 0;
	virtual void stop() = 0;
	virtual void countAverage() = 0;
	virtual double readAverage() = 0;

};


#endif
