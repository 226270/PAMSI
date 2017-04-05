// Definicja klasy Queue
// Klasa dziedziczy po intefejsie iQueue

#ifndef QUEUE_HH
#define QUEUE_HH

#include "iQueue.hh"
#include "iRunnable.hh"
#include "Element.hh"


class Queue : public iQueue, public iRunnable {
	
	unsigned long int _size = 0;
	Element *_pBegin = NULL;
	Element *_pEnd = NULL;
	
public:
	
	~Queue();
	virtual unsigned long int size();
	virtual void enqueue(int element);
	virtual void dequeue();
	virtual int find(int);
	virtual void doAlgorithm(unsigned long int);
	virtual void neutralise();

};


#endif
