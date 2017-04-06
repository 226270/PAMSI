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
	unsigned long int size();
	void add(int element, unsigned long int position);
	void remove(unsigned long int position);
	int get(unsigned long int position);
	int find(int);
	void doAlgorithm(unsigned long int);
	void neutralise();

};


#endif
