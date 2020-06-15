#pragma once
#include "Column.h"
#include "Column_Int.h"
#include "Column_Str.h"

#define MAX_Y 100
#define SUCCESS 0
#define ERR_INVALID_SIZE 1

class Tablica{
	private:
		Kolumna *tablica;
		int rozmiarX;
		int rozmiarY;

	public:
		Tablica(){
			rozmiarX = 10;
			rozmiarY = 10;

			tablica = new KolumnaInt[rozmiarX];
		}
		Tablica(int nrozmiarX){
			rozmiarX = nrozmiarX;
			rozmiarY = 10;

			tablica = new KolumnaInt[rozmiarX];
		}
		int pobierzRozmiarX(){
			return rozmiarX;
		}
		int pobierzRozmiarY(){
			return rozmiarY;
		}
		int pobierzTypKomorki(int x, int y){
			return tablica[x].pobierzKomorke(y)->pobierzTyp();
		}
		int kopiuj_zawartosc(Tablica tab1, Tablica tab2);

		int zmien_rozmiar(Tablica *arr, int nowy_rozmiarX, int nowy_rozmiarY);

		int wyswietl_tablice(Tablica arr);

		int zmienTyp(int typ, int zmienianyKolumna);

		int aktualizuj_zawartoscINT(Tablica arr, int indeksX, int indeksY, int nowa_wartosc);

		int aktualizuj_zawartoscSTR(Tablica arr, int indeksX, int indeksY, std::string nowa_wartosc);

		int suma_kolumna(Tablica arr, int kolumna, int *sumaY);

		int suma_wiersz(Tablica arr, int wiersz, int *sumaX);

		int minimumX(Tablica arr, int wiersz, int *najmniejszaX);

		int minimumY(Tablica arr, int kolumna, int *najmniejszaY);

		int maximumX(Tablica arr, int wiersz, int *najwiekszaX);

		int maximumY(Tablica arr, int kolumna, int *najwiekszaY);

		int srednia_wiersz(Tablica arr, int wiersz, double *sredniaX, int *sumaX);

		int srednia_kolumna(Tablica arr, int kolumna, double *sredniaY, int *sumaY);
};
