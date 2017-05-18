// Definicja klasy Array

#ifndef ASSOCARRAY_HH
#define ASSOCARRAY_HH

#define START 31                        // ilosc potrzebnych liter alfabetu

#include "iAssocArray.hh"
#include "iRunnable.hh"
#include "List.hh"


class AssocArray : public iAssocArray, public iRunnable {
	
	List **_pAssocArray;                // wskaznik na tablice
	unsigned int _size;                 // rozmiar tablicy

public:
	
	AssocArray();
	~AssocArray();
	unsigned int readSize();
	int hashElem(std::string);
	void addElem(std::string, std::string);
	std::string readElem(std::string);

	void doAlgorithm(unsigned int amount);
	void neutralise();

};


#endif
