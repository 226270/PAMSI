// Definicja interfejsu iArray

#ifndef IASSOCARRAY_HH
#define IASSOCARRAY_HH

#include <string>
#include <iostream>


class iAssocArray {
	
public:

	virtual unsigned int readSize() = 0;
	virtual int hashElem(std::string) = 0;
	virtual void addElem(std::string, std::string) = 0;
	virtual std::string readElem(std::string) = 0;

};


#endif
