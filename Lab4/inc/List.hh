// Definicja klasy List

#ifndef LIST_HH
#define LIST_HH

#include "iList.hh"
#include "iRunnable.hh"
#include "Element.hh"


class List : public iList, public iRunnable {
	
	unsigned long int _size = 0;
	Element *_pBegin = NULL;


public:
	
	~List();
	virtual unsigned long int size();
	virtual void add(int element, unsigned long int position);
	virtual void remove(unsigned long int position);
	virtual int get(unsigned long int position);
	virtual int find(int);
	virtual void doAlgorithm(unsigned long int);
	virtual void neutralise();

};


#endif
