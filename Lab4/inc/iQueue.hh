// Definicja interfejsu iQueue

#ifndef IQUEUE_HH
#define IQUEUE_HH

#include <iostream>


class iQueue {
	
public:

	virtual void enqueue(int element) = 0;
	virtual void dequeue() = 0;
	virtual unsigned long int size() = 0;
	virtual int find(int) = 0;
	
};


#endif