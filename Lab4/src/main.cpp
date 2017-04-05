// Trzecie laboratorium 16.03.2017
// Podejscie obiektowe

#include "Stopwatch.hh"
#include "Stack.hh"
#include "List.hh"


int main() {
	
	unsigned int amount = 0;                 // wielkosc problemu
	unsigned int repeat = 0;                 // ilosc powtorzen
	char help;                               // zmienna pomocnicza do menu

	List object;

	do {

		std::cout << "\nPomiar czasu algorytmow.\n";
		std::cout << "  1. Wpisz dane\n";
		std::cout << "  2. Zmierz sredni czas\n";
		std::cout << "  3. Koniec pracy\n";
		std::cin >> help;

		switch(help) {

			case '1':
				std::cout << "Podaj rozmiar problemu i ilosc powtorzen.\n";
				std::cin >> amount >> repeat;
				break;
			case '2':
			{
				Stopwatch clock(amount, repeat);
				clock.measureTime(object);
				clock.countAverage();
				std::cout << "Sredni czas wynosi: " << clock.readAverage();
				//clock.~Stopwatch();
			}
				break;
			case '3':
				std::cout << "Do zobaczenia!\n";
				break;
			default:
				std::cout << "Nieprawidlowa liczba!\n";
				break;

		};

	} while (help != '3');
	
	return 0;
	
}