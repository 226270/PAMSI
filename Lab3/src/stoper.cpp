#include "stoper.hh"


// Dekonstruktor
stopwatch::~stopwatch() {

	delete [] pTime;

}

// Funkcja mierzaca czas algorytmu
void stopwatch::measureTime(runnable &Item, unsigned int Num1, unsigned int Num2) {

	clock_t Begin;                   // poczatkowa ilosc cykli zegara
	clock_t End;                     // koncowa ilosc cykli zegara

	Amount = Num1;
	Repeat = Num2;

	if (pTime != NULL) {             // przy kolejnym wpisaniu wielkosci problemu
                                     // nalezy najpierw wyzerowac tablice czasu
		delete [] pTime;

	}

	pTime = new double[Repeat];

	for (unsigned int i = 0; i < Repeat; ++i) {

		Begin = clock();
		Item.doAlgorithm(Amount);
		End = clock();
		pTime[i] = static_cast <double> (End - Begin) / CLOCKS_PER_SEC;
		Item.neutralise();

	}

}

// Funkcja wyliczajaca sredni czas
void stopwatch::countAverage() {

	for (unsigned int i = 0; i < Repeat; ++i) {

		AverageTime += pTime[i];

	}

	AverageTime /= Repeat;

}

// Funkcja zwracajaca sredni czas
double stopwatch::readAverage() {

	return AverageTime;

}
