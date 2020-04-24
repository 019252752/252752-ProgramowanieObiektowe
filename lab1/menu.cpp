#include <iostream>
#include <ncurses.h>

using namespace std;
namespace {

	void menu_pocz() {
		cout << "Stworz swoja poczatkowa tabele, podajac najpierw ilosc wierszy, a potem ilosc kolumn:" << endl;

	}





	void menu() {

		

		cout << endl <<"MENU" << endl;
		cout << "WYBIERZ NUMER OPERACJI KTORA CHCESZ WYKONAC, WCISNIJ ENTER BY POTWIERDZIC: " << endl;
		cout << "1. Stworz nowa tabele (poprzednia zostanie usunieta)" << endl <<
			"2. Zmien rozmiar istniejacej tabeli" << endl <<
			"3. Aktualizuj istniejace elementy w tabeli" << endl <<
			"4. Wyswietl zawartosc tabeli" << endl
			<< "5.Zakoncz program" << endl<< endl;

		
	}
}
