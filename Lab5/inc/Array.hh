// Definicja klasy Array


#ifndef ARRAY_HH
#define ARRAY_HH

#define START 10
#define VALUE 5

#include <iostream>
//#include "iRunnable.hh"


class Array {
	
	int *_pArray;                       // wskaznik na tablice
	unsigned int _size;                // rozmiar tablicy

	void extendArray(unsigned int amount);

public:
	
	Array(unsigned int number);
	~Array();
	void writeElem(unsigned int index, int value);
	int readElem(unsigned int index);
	void quicksort(int num1, int num2);
	void doAlgorithm(unsigned int amount);
	void neutralise();


};


#endif
