#include <iostream>
#include <ncurses.h>
using namespace std;


namespace {
	float** tab;


	void tablica_powstanie(int* r1, int* r2) { //tutaj tworze pierwszy raz tablice dwuwymiarowa, zwracam wskaznik do niej
		int wym1 = *r1;
		int wym2 = *r2;

		float** tablica = new float* [wym1];
			for (int i = 0; i < wym2; i++)
			tablica[i] = new float[wym2];

			for (int i = 0; i < wym1; i++) {
				for (int j = 0; j < wym2; j++) {

					tablica[i][j] = 0;
					}

			}


		*r1 = wym1;
		*r2 = wym2; //////zwroc uwagem

		tab = tablica;
	}

	void removing_table(int* columns_number) {
		int num = *columns_number;
		for (int i = 0; i < num; i++)
			delete[] tab[i];

		delete[] tab;

	}



	void tablica_rozmiar(int new1, int new2, int* rozmiar1, int* rozmiar2) { //zmiana rozmiaru tablicy

		int r1 = *rozmiar1;
		int r2 = *rozmiar2;

		if (new1>=r1 || new2>=r2) {
			float** tab_copy = new float* [new1];

			for (int i = 0; i < new2; i++)
				tab_copy[i] = new float[new2];

			for (int i = 0; i < new1; i++) {
				for (int j = 0; j < new2; j++) {

					tab_copy[i][j] = 0;

				}


			}



			for (int i = 0; i < r1; i++) {
				for (int j = 0; j < r2; j++)
					tab_copy[i][j] = tab[i][j];

			}
			removing_table(rozmiar2);

			tab = tab_copy;
		}
		else {
			cout << endl << "Nowe wymiary muszš być większe  od poprzednich!" << endl;
		}
	}


	void aktualizowanie(int* rozmiar1, int* rozmiar2) {

		int wiersz, kolumna;
		int koniec = 0;
		int w = *rozmiar1;
		int k = *rozmiar2;

		cout << "Rozmiar obecnej tablicy to: " << w << "x" << k << endl;

		while (koniec == 0)
		{

			cout << "Ktory element tablicy chcesz edytowac?" << endl;
			cout << "Wpisz numer wiersza: ";

			cin >> wiersz;
			while (wiersz  < 0 || wiersz > w)
			{
				cout << "Nie ma takiego wiersza! Wprowadz numer wiersza ponownie: ";
				cin >> wiersz;

			}

			cout << "Wpisz numer kolumny: ";

			cin >> kolumna;
			while (kolumna < 0 || kolumna > k)
			{
				cout << "Nie ma takiej kolumny! Wprowadz numer kolumny ponownie: ";
				cin >> kolumna;

			}

			cout << "W tej komorce znajduje sie: " << tab[wiersz][kolumna] << endl;
			cout << "Wprowadz nowa wartosc: ";
			cin >> tab[wiersz][kolumna];

			cout << endl << "Czy chcesz zakonczyc edycje? Jezeli tak wcisnij 1, jezeli nie kliknij dowolny inny przycisk. ";



			cin >> koniec; 

			if (koniec == 1) {
				koniec = 1;
			}
			else
			{
				koniec = 0;
			}
		}


	}
}
