// Definicja interfejsu iRunnable

#ifndef IRUNNABLE_HH
#define IRUNNABLE_HH

#include <string>



class iRunnable {
	
public:
	
	virtual void doAlgorithm(std::string) = 0;
	virtual void neutralise() = 0;
	virtual void addElem(std::string, std::string) = 0;
	virtual std::string readElem(std::string) = 0;
	
};


#endif