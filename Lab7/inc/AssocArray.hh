// Definicja klasy Array

#ifndef ASSOCARRAY_HH
#define ASSOCARRAY_HH

#include "iRunnable.hh"
#include "iAssocArray.hh"
#include "List.hh"



class AssocArray : public iAssocArray, public iRunnable {
	
	List *_pAssocArray;                // wskaznik na tablice
	unsigned int _size;                // rozmiar tablicy

public:
	
	AssocArray(unsigned int);
	unsigned int readSize();
	int hashElem(std::string);
	void addElem(std::string, std::string);
	std::string readElem(std::string);

	void doAlgorithm(std::string);
	void neutralise();

};


#endif
