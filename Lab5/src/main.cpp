// Piąte laboratorium 06.04.2017


#include "Stopwatch.hh"
#include "Array.hh"


int main() {
	
	int size, val; 

	std::cout << "Podaj rozmiar\n";
	std::cin >> size;

	Array object(size);

	std::cout << "Wpisz wartosci:\n";

	for(int i = 0; i < size; ++i) {
		std::cin >> val;
		object.writeElem(i, val);
	}

	std::cout << "Twoja tablica przed sortowaniem:\n";

	for(int i = 0; i < size; ++i) {
		std::cout << object.readElem(i) << " ";
	}

	std::cout << std::endl;

	object.quicksort(0, size-1);

	std::cout << "Twoja tablica po sortowaniem:\n";

	for(int i = 0; i < size; ++i) {
		std::cout << object.readElem(i) << " ";
	}

	std::cout << std::endl;

	return 0;
	
}