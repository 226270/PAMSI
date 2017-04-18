// Piąte laboratorium 06.04.2017


#include "Stopwatch.hh"
#include "Array.hh"


int main() {
	
	int size, ver, rep; 

	srand(time(NULL));

	std::cout << "Podaj rozmiar, wersje wypelnienia, ilosc powtorzen\n";
	std::cout << "    1. Wypelnienie rosnaco\n";
	std::cout << "    2. Wypelnienie malejaco\n";
	std::cout << "    3. Wypelnienie losowo\n\n";
	std::cin >> size >> ver >> rep;

	Array object(size);
	Stopwatch timer(ver, rep);

	timer.measureTime(object);
	timer.countAverage();
	std::cout << "Sredni czas wynosi:  " << timer.readAverage() << std::endl;

	return 0;
	
}