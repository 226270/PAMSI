#include <iostream>
#include <cstdlib>
#include "Tablica.hh"


using namespace std;

Tablica::Tablica(int rozmiar) {

	tablica=new int [rozmiar];
	pom = new int [rozmiar];
	aktualny_rozmiar=rozmiar;

}

//////////////////////////////////////////////////////

int Tablica::zwroc_rozmiar() {

	if ( aktualny_rozmiar > 0 ){
		return aktualny_rozmiar;
	}

	else{ 
		cout << "NIEPOPRAWNY ROZMIAR !" << endl;
		return 0;
	}

}

////////////////////////////////////////////////////////

int Tablica::wypisz (int indeks) {

	if ( indeks < aktualny_rozmiar) {
		return tablica[indeks];
	}

	else { 
		cout << "NIE MOZNA ODCZYTAC || WYJECHALES POZA TABLICE" << endl;
		return 0;
	} 

}

/////////////////////////////////////////////////////////////

void Tablica::wypisz_tablice () {

	for (int i = 0; i < aktualny_rozmiar; ++i)
	{
		cout <<tablica[i] << "\t" ;
	}
	cout << endl;

}

//////////////////////////////////////////////////////////////

void Tablica::zapisz (int indeks , int wartosc) {

	if ( indeks < aktualny_rozmiar) {	//jesli wszsytko ok
		tablica[indeks] = wartosc;
	}

	else if (indeks < 0) { 				// jesli poza tablica
		cout << "NIE MOZNA ZAPISAC || WYJECHALES POZA TABLICE" << endl;
	}

	else {
		tablica = powieksz(tablica, indeks+1); // TUTAJ WSPISUJESZ ALBO indeks+1 ALBO indeks*2
		tablica[indeks] = wartosc;
	}

}

//////////////////////////////////////////////////////////////////

int *Tablica::powieksz(int stara_tablica[], int nowy_rozmiar) {  	//nowy_rozmiar to rozmiar jaki 

	int * nowa_tablica = new int[nowy_rozmiar];					    //jaki chce osiagnac po powiekszeniu
	
	for(int i = 0; i<aktualny_rozmiar; i++) {
		nowa_tablica[i] = stara_tablica[i];
	}

	aktualny_rozmiar = nowy_rozmiar;

	delete [] stara_tablica;

	return nowa_tablica;

}

///////////////////////////////////////////////////////////////////

void Tablica::Quicksort(int opcja_pivota, int lewa, int prawa) {

	int i = lewa;
	int j = prawa;
	int pivot;

	if (opcja_pivota == 0){	pivot = tablica[(lewa+prawa)/2]; } // pivot po srodku
	if (opcja_pivota == 1){ pivot = tablica[lewa]; }           // pivot lewy 
	if (opcja_pivota == 2){ pivot = tablica[prawa]; }          // pivot prawy
	
	do {
		while (tablica[i] < pivot){
			i++;
		}

		while (tablica[j] > pivot){
			j--;
		}

		if (i <= j) {
			int ziemniak = tablica[i];
			tablica[i] = tablica[j];
			tablica[j] = ziemniak;

			i++;
			j--;
		}

	} while (i <= j);

	if (lewa < j) Quicksort(opcja_pivota, lewa, j);
	if (prawa > i) Quicksort(opcja_pivota, i, prawa);

}

///////////////////////////////////////////////////////////////////////////////

// scalenie posortowanych podtablic
void Tablica::scal(int lewy, int srodek, int prawy) {

	int i = lewy;
	int j = srodek + 1;
 
	//kopiujemy lewą i prawą część tablicy do tablicy pomocniczej
	for(int i = lewy; i <= prawy; ++i) {
		pom[i] = tablica[i];
	}

	//scalenie dwóch podtablic pomocniczych i zapisanie ich we własciwej tablicy
	for(int k = lewy; k <= prawy; ++k) {
		if(i <= srodek) {
			if(j <= prawy) {
				if(pom[j] < pom[i]) {
					tablica[k] = pom[j++];
				}
				else {
					tablica[k] = pom[i++];
				}
			}
			else {
				tablica[k] = pom[i++];
			}
		}
		else {
			tablica[k] = pom[j++];
		}
	}

}

///////////////////////////////////////////////////////////
 
void Tablica::mergesort(int lewy, int prawy) {

	//gdy mamy jeden element, to jest on już posortowany
	if(prawy <= lewy) {
		return;
	} 

	//znajdujemy srodek podtablicy
	int srodek = (prawy+lewy)/2;

	//dzielimy tablice na częsć lewą i prawa
	mergesort(lewy, srodek); 
	mergesort(srodek+1, prawy);

	//scalamy dwie już posortowane tablice
	scal(lewy, srodek, prawy);

}


///////////////////////////////////////////////////////////////////////////////

void Tablica::wykonaj_test(int ilosc) {
	
	mergesort(0, ilosc-1);

} 

////////////////////////////////////////////////////////////////////

