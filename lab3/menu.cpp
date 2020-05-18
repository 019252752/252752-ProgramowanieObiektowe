#include "main.hpp"
#include "menu.hpp"

using namespace std;

	

	int menu() 
	{

		int m=0;
		
		cout << endl <<"MENU" << endl;
		cout << "WYBIERZ NUMER OPERACJI KTORA CHCESZ WYKONAC, WCISNIJ ENTER BY POTWIERDZIC: " << endl;
		cout << "1. Stworz nowa tabele (poprzednia zostanie usunieta)" << endl <<
			"2. Zmien rozmiar istniejacej tabeli" << endl <<
			"3. Aktualizuj istniejace elementy w tabeli" << endl <<
			"4. Wyswietl zawartosc tabeli" << endl
			<< "5. Operacje matematyczne" << endl
			<< "6. Zakoncz program" << endl;


			cin >> m;
					
					return m;
	}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	void how(Tablica & tab )
	{
		int z=0;
		int w=0;
		
		while(z<1)
		{
			
			cout << "Podaj ilosc wierszy: ";
			cin >> z;
		
			if(z<1)
			{
				cout << endl << "Wprowadzono bledno wartosc, wpisz poprawna jeszcze raz." <<  endl;
			
			
			}
		
		}
		
		while(w<1)
		{
								
			cout << "Podaj ilosc kolumn: ";
			cin >> w;
				
			if(w<1)
			{
				cout << endl << "Wprowadzono bledno wartosc, wpisz poprawna jeszcze raz." <<  endl;
			
			
			}



		}

		tab.line=z;
		tab.column=w;


	}

		
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int menu_operations()
{
	
	int m;
	
	cout << "1. Zsumuj elementy w wybranym wierszu." << endl 
	<< "2. Zsumuj elementy w wybranej kolumnie."<< endl
	<< "3. Znajdz najmniejszy element w tabeli" << endl
	<< "4. Znajdz najwiekszy element w tabeli" << endl 
	<<  "5. Policz srednia wszystkich elementow" << endl
	<< "Wcisnij 6 zeby wrocic do menu" << endl;
	
	cin >> m;
	
	return m;
}

		
