// Siódme laboratorium 27.04.2017


#include "Stopwatch.hh"
#include "AssocArray.hh"
#include <iomanip>

#define BOX    500                        // ilosc "pudelek"



int main() {

	srand(time(NULL));

	unsigned int amount;                // ilosc elementow
	unsigned int repeat;

	std::cout << "Podaj rozmiar problemu i ilosc powtorzen \n";
	std::cin >> amount >> repeat;

	AssocArray object(BOX);
	Stopwatch clock(amount, repeat);

	clock.measureTime(object);
	clock.countAverage();

	std::cout << std::endl << "Sredni czas: " << std::setprecision(50) << clock.readAverage() << std::endl;

	return 0;
	
}
