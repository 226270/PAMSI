// Aleksandra Nycz (Rafał Perużyński)
// 226270
// 20.04.2017 


#include "Zegar.hh"
#include "Tablica.hh"
#include "iostream"

using namespace std;



int main() {

	Zegar Stoper;
	
	int ilosc_pomiarow = 5;
	int wielkosc_problemu;
	int poczatkowy_rozmiar;

	cout << "PODAJ WIELKOSC PROBLEMU : ";
	cin >> wielkosc_problemu;
	poczatkowy_rozmiar = wielkosc_problemu;


	cout << "\nMERGESORT " << endl;
	cout << "WIELKOSC PROBLEMU : ";
	cout << wielkosc_problemu << endl;


	//WYPELNIA LOSOWO
	cout << "WYPELNIA LOSOWO : "<< endl;
	for (int i = 0; i < ilosc_pomiarow; ++i){
		Tablica Tab1(poczatkowy_rozmiar);
		for (int i = 0; i < wielkosc_problemu ; ++i) { 
			Tab1.zapisz(i, rand()%100+1);
		}
		Stoper.ZmierzCzas(Tab1, wielkosc_problemu);
	}

	//WYPELNIA ROSNACO
	cout << "WYPELNIA ROSNACO : "<< endl;
	for (int i = 0; i < ilosc_pomiarow; ++i){
		Tablica Tab1(poczatkowy_rozmiar);
		for (int i = 0; i < wielkosc_problemu ; ++i) {
			Tab1.zapisz(i, i+1);
		}
		Stoper.ZmierzCzas(Tab1, wielkosc_problemu);
	}

	//WYPELNIA MALEJACO
	cout << "WYPELNIA MALEJACO : "<< endl;
	for (int i = 0; i < ilosc_pomiarow; ++i){
		Tablica Tab1(poczatkowy_rozmiar);
		for (int i = 0; i < wielkosc_problemu ; ++i) {
			Tab1.zapisz(i, wielkosc_problemu-i);
		}
		Stoper.ZmierzCzas(Tab1, wielkosc_problemu);
	}

}
