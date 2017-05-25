// Ósme laboratorium 18.05.2017


#include "Stopwatch.hh"
#include "AVL.hh"


int main() {
	
	std::srand(time(NULL));

	unsigned int amount = 0;
	unsigned int repeat = 0;

	std::cout << "Podaj rozmiar problemu i ilosc powtorzen: \n";
	std::cin >> amount >> repeat;

	AVL tree;
	Stopwatch clock(amount, repeat);

	clock.measureTime(tree);
	clock.countAverage();

	std::cout << "Czas wykonania programu: ";
	std::cout << clock.readAverage() << std::endl << tree.Size;

	return 0;
	
}