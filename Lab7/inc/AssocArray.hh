// Definicja klasy Array


#ifndef ASSOCARRAY_HH
#define ASSOCARRAY_HH

#define START 50

#include <iostream>
#include "iAssocArray.hh"
#include "iRunnable.hh"


class AssocArray : public iAssocArray, public iRunnable {
	
	int *_pAssocArray;                  // wskaznik na tablice
	unsigned int _size;                 // rozmiar tablicy

public:
	
	AssocArray();
	~AssocArray();
	unsigned int readSize();
	int hashElem(std::string);
	void addElem(std::string, std::string);


	void doAlgorithm(unsigned int amount);
	void neutralise();


};


#endif
