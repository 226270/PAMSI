// Definicja interfejsu iArray

#ifndef IARRAY_HH
#define IARRAY_HH


class iArray {
	
public:

	virtual void extendArray(unsigned int amount) = 0;
	virtual void writeElem(unsigned int index, int value) = 0;
	virtual int readElem(unsigned int index) = 0 ;
	virtual void quicksort(int num1, int num2) = 0;
	virtual void fillIncrease() = 0;
	virtual void fillDecrease() = 0;
	virtual void fillRandom() = 0;
	
};


#endif
