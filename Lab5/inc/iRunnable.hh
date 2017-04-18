// Definicja interfejsu iRunnable

#ifndef IRUNNABLE_HH
#define IRUNNABLE_HH


class iRunnable {
	
public:
	
	virtual void doAlgorithm(unsigned int) = 0;
	virtual void neutralise() = 0;
	
};


#endif