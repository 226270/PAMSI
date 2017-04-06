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
	unsigned long int size();
	void enqueue(int element);
	void dequeue();
	int find(int);
	void doAlgorithm(unsigned long int);
	void neutralise();

};


#endif
