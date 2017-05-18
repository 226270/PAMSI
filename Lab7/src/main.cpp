// Siódme laboratorium 27.04.2017


#include "Stopwatch.hh"
#include "AssocArray.hh"


int main() {

	std::string key;
	std::string data;

	AssocArray object;

	std::cout << "Podaj klucz: \n";
	std::cin >> key;
	std::cout << std::endl << "Definicja Twojego hasla to: \n\t";
	std::cin >> data;

	object.addElem(key, data);
//	std::cout << object.readElem(key);

	return 0;
	
}