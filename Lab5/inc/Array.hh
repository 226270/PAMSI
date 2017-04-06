// Definicja klasy Array


#ifndef ARRAY_HH
#define ARRAY_HH

#define START 10
#define VALUE 5

#include <iostream>
#include "iArray.hh"


class Array : public iArray {
	
	int *_pArray;                       // wskaznik na tablice
	unsigned int _size;                // rozmiar tablicy

public:
	
	Array(unsigned int number);
	~Array();
	virtual void extendArray(unsigned int amount);
	virtual void writeElem(unsigned int index, int value);
	virtual int readElem(unsigned int index);
	virtual void quicksort(int num1, int num2);
	virtual void doAlgorithm(unsigned int amount);
	virtual void neutralise();


};


#endif
