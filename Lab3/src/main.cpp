// Trzecie laboratorium 16.03.2017
// Podejscie obiektowe

#include "stoper.hh"
#define START 10                       // poczatkowy rozmiar tablicy
#define VALUE 1                        // wartosc wypelnienia


int main() {
	
	unsigned int Amount = 0;
	unsigned int Repeat = 0;
	char Help;
	
	stopwatch Stoper;
	array Object(START);

	do {

		std::cout << "\nPomiar czasu algorytmow.\n";
		std::cout << "  1. Wpisz dane\n";
		std::cout << "  2. Zmierz czas\n";
		std::cout << "  3. Podaj sredni czas\n";
		std::cout << "  4. Koniec pracy\n";
		std::cin >> Help;

		switch(Help) {

			case '1':
				std::cout << "Podaj rozmiar problemu i ilosc powtorzen.\n";
				std::cin >> Amount >> Repeat;
				break;
			case '2':
				Stoper.measureTime(Object, Amount, Repeat);
				break;
			case '3':
				Stoper.countAverage();
				std::cout << "Sredni czas wynosi: " << Stoper.readAverage();
				break;
			case '4':
				std::cout << "Do zobaczenia!\n";
				break;
			default:
				std::cout << "Nieprawidlowa liczba!\n";
				break;

		};

	} while (Help != '4');
	
	return 0;
	
}
