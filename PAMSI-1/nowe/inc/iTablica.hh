#ifndef iTablica_HH
#define itablica_HH

/*
	interfejs iTablica
*/

class iTablica{
public:
	virtual void zapisz(int indeks,int wartosc) = 0;
	virtual int wypisz(int indeks) = 0;
	virtual int zwroc_rozmiar() = 0;
	virtual void wypisz_tablice() = 0;
};

#endif