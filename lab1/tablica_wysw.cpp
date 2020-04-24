#include <iostream>
#include <ncurses.h>
using namespace std;
namespace {
	float** tabl;

	void wyswietlanie(int* r1, int* r2) {

		int rr1 = *r1;
		int rr2 = *r2;

		
			int wyb;
			cout << "Chcesz wyswietlic wszystkie elementy, czy wybrany pojedynczy?" << endl <<
				"1. Wszystkie" << endl << "2. Wybrany" << endl;

			cin >>wyb;


			switch (wyb)
			{
			case 1:
				for (int i = 0; i < rr1; i++) {
					for (int j = 0; j < rr2; j++) {

						cout << "Nr: " << i << "x" << j << " zawiera: " << tabl[i][j] << endl;


					}
				}

				break;
			case 2:
				int x, y;
				cout << "Wprowadz wspolrzedne:" << endl << "Wiersz: ";
				cin >> x;
				while (x<1 || x>rr1)
				{
					cout << endl << "Nie ma takiej wspolrzednej, wprowadz poprawna: ";
					cin >> x;
				}

				cout << endl << "Kolumna: ";
				cin >> y;
				while (y<1 || y>rr1)
				{
					cout << endl << "Nie ma takiej wspolrzednej, wprowadz poprawna: ";
					cin >> y;
				}

				cout << tabl[x][y];

				break;
			default:

				break;
			}



		



	}
}
