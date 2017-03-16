// Drugie laboratorium 09.03.2017
// Sprawdzenie potrzebnego czasu na wykonanie algorytmow powiekszajacych
// tablice dynamiczne.

#include <iostream>
#include <ctime>
#include "tab2.hpp"

#define START 10                       // poczatkowy rozmiar tablicy
#define END 10                         // koncowy rozmair tablicy
#define VALUE 1                        // wartosc wypelnienia


// Funkcja obliczajca czas trwania wykonania programu w sekundach
double seconds(clock_t Time) {

	return static_cast <double> (Time) / CLOCKS_PER_SEC;

}


int main() {
	
	array Tab(START);
	
	
	for (unsigned int i = 0; i < END; ++i) {
		
		Tab.write_elem(i, VALUE);
		
	}
	
	std::cout << "Uplynelo ";
	std::cout.precision(10);
	std::cout << seconds(clock()) << "\n";
	
	return 0;
	
}
