// Aleksandra Nycz (Rafał Perużyński)
// 226270
// PAMSI 


#include "Zegar.hh"
#include "Tablica.hh"
#include "iostream"

using namespace std;
int costam;


/////////////////////////////////////////////////////////////
int main(){
	// TWORZE ZMIENNA DO POMIARU CZASU
	Zegar Stoper;
	
	// ZMIENNA POMOCNICZA
	int ilosc_pomiarow = 20; /*
	int poczatkowy_rozmiar = 1000000;
	int wielkosc_problemu =  1000000;
	*/
	int wielkosc_problemu , poczatkowy_rozmiar;
	cout << "PODAJ WIELKOSC PROBLEMU : ";
	cin >> wielkosc_problemu;
	poczatkowy_rozmiar=wielkosc_problemu;


		// QUICKSORT 
		cout << "\nQUICKSORT " <<endl;
		cout << "WIELKOSC PROBLEMU : ";
		cout <<wielkosc_problemu<<endl;


		//WYPELNIA LOSOWO
		cout << "WYPELNIA LOSOWO : "<<endl;
		for (int i = 0; i < ilosc_pomiarow; ++i){
			Tablica Tab1(poczatkowy_rozmiar);
			for (int i = 0; i < wielkosc_problemu ; ++i){ Tab1.zapisz(i , rand()%100+1);} // WYPELNIA LOSOWO
			Stoper.ZmierzCzas(Tab1, wielkosc_problemu);
		}

		//WYPELNIA ROSNACO
		cout << "WYPELNIA ROSNACO : "<<endl;
		for (int i = 0; i < ilosc_pomiarow; ++i){
			Tablica Tab1(poczatkowy_rozmiar);
			for (int i = 0; i < wielkosc_problemu ; ++i){ Tab1.zapisz(i , i+1); } // WYPELNIA ROSNACO
			Stoper.ZmierzCzas(Tab1, wielkosc_problemu);
		}

		//WYPELNIA MALEJACO
		cout << "WYPELNIA MALEJACO : "<<endl;
		for (int i = 0; i < ilosc_pomiarow; ++i){
			Tablica Tab1(poczatkowy_rozmiar);
			for (int i = 0; i < wielkosc_problemu ; ++i){ Tab1.zapisz(i , wielkosc_problemu-i);} // WYPELNIA MALEJACO
			Stoper.ZmierzCzas(Tab1, wielkosc_problemu);
		}
}