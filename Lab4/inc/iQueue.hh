// Definicja interfejsu iQueue

#ifndef IQUEUE_HH
#define IQUEUE_HH

#include <iostream>


class iQueue {
	
public:

	virtual void enqueue(int Element) = 0;
	virtual void dequeue() = 0;
	virtual int size() = 0;
	
};


#endif