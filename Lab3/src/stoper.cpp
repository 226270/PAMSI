#include "stoper.hh"


stopwatch::~stopwatch() {

	delete [] pTime;

}

void stopwatch::measureTime(runnable &Item, unsigned int Num1, unsigned int Num2) {

	clock_t Begin;
	clock_t End;

	Amount = Num1;
	Repeat = Num2;
	pTime = new double[Repeat];

	for (unsigned int i = 0; i < Repeat; ++i) {

		Begin = clock();
		Item.doAlgorithm(Amount);
		End = clock();
		pTime[i] = static_cast <double> (End - Begin) / CLOCKS_PER_SEC;
		Item.neutralise();

	}

}

void stopwatch::countAverage() {

	for (unsigned int i = 0; i < Repeat; ++i) {

		AverageTime += pTime[i];

	}

	AverageTime /= Repeat;

}

double stopwatch::readAverage() {

	return AverageTime;

}
