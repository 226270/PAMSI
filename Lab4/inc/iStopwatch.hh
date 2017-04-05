// Definicja interfejsu iStopwatch

#ifndef ISTOPWATCH_HH
#define ISTOPWATCH_HH


class iStopwatch {
	
public:

	virtual ~iStopwatch() = 0;
	virtual void measureTime() = 0;
	virtual void countAverage() = 0;
	virtual double readAverage() = 0;

};


#endif
