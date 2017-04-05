#include "Stopwatch.hh"


// Konstruktor
Stopwatch::Stopwatch(unsigned int num1, unsigned int num2) {

	_amount = num1;
	_repeat = num2;
	_pTime = new double[_repeat];

}

// Dekonstruktor
Stopwatch::~Stopwatch() {

	delete [] _pTime;

}

// Funkcja mierzaca czas algorytmu
void Stopwatch::measureTime(iRunnable &item) {

	clock_t begin;                   // poczatkowa ilosc cykli zegara
	clock_t end;                     // koncowa ilosc cykli zegara

	for (unsigned int i = 0; i < _repeat; ++i) {

		begin = clock();
	//	item.doAlgorithm(_amount);
		end = clock();
		_pTime[i] = static_cast <double> (end - begin) / CLOCKS_PER_SEC;
	//	item.neutralise();

	}

}

// Funkcja wyliczajaca sredni czas
void Stopwatch::countAverage() {

	for (unsigned int i = 0; i < _repeat; ++i) {

		_averageTime += _pTime[i];

	}

	_averageTime /= _repeat;

}

// Funkcja zwracajaca sredni czas
double Stopwatch::readAverage() {

	return _averageTime;

}
