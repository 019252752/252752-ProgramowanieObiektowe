#include "main.hpp"
#include "tablica.hpp"


using namespace std;
	


	void tablica_powstanie(Tablica & tab)
	{ //tutaj tworze pierwszy raz tablice dwuwymiarowa, zwracam wskaznik do niej
	


		float** tablica = new float* [tab.line];
			for (int i = 0; i < tab.column; i++)
			{
				tablica[i] = new float[tab.column];
			}
			
			for (int i = 0; i < tab.line; i++) {
				for (int j = 0; j < tab.column; j++) {

					tablica[i][j] = zero;
					}

			}
			tab.tablica_str=tablica;
	}
	
	/////////////////////////////////////////////////////////////////////////////
	
	
	
	void filling(Tablica & tab)
	{
	

	for (int i = 0; i < tab.line; i++) {
		 for (int j = 0; j < tab.column; j++) {
			 
			tab.tablica_str[i][j]=zero;

		 }


	 }
	
		
	}
	
	
	
	
	
	
	
	

	void removing_table(Tablica & tab)
	{
		
		for (int i = 0; i < tab.line ; i++)
		{
			delete[] tab.tablica_str[i];
		}
		
		delete[] tab.tablica_str;

	}



/////////////////////////////////////////////////////////////////////////////






	void tablica_rozmiar(int old1, int old2, Tablica & tab) 
	{ //zmiana rozmiaru tablicy



		if (tab.line>=old1 || tab.column>=old2) {
			float** tab_copy = new float* [tab.line];

			for (int i = 0; i < tab.column; i++)
			tab_copy[i] = new float[tab.column];

			for (int i = 0; i < tab.line; i++) {
				for (int j = 0; j < tab.column; j++) {

					tab_copy[i][j] = 0;

				}


			}



			for (int i = 0; i < old1; i++) {
				for (int j = 0; j < old2; j++)
					tab_copy[i][j] = tab.tablica_str[i][j];

			}
			
			for(int i=0; i < old2; i++)
			{
				delete[] tab.tablica_str[i];
			}
			
			delete[] tab.tablica_str;

			tab.tablica_str = tab_copy;
			
			for(int i=0; i < tab.column; i++)
			{
				delete[] tab_copy[i];
			}
			
			delete[] tab_copy;
		}
		else {
			cout << endl << "Nowe wymiary musza byc wieksze  od poprzednich!" << endl;
		}
	}




//////////////////////////////////////////////////////////////////////////////////






	void aktualizowanie(Tablica & tab) 
	{

		int wiersz, kolumna;
		int koniec = 0;
		

		cout << "Rozmiar obecnej tablicy to: " << tab.line << "x" << tab.column << endl;

		while (koniec == 0)
		{

			cout << "Ktory element tablicy chcesz edytowac?" << endl;
			cout << "Wpisz numer wiersza: ";

			cin >> wiersz;
			while (wiersz  < 0 || wiersz > tab.line)
			{
				cout << "Nie ma takiego wiersza! Wprowadz numer wiersza ponownie: ";
				cin >> wiersz;

			}

			cout << "Wpisz numer kolumny: ";

			cin >> kolumna;
			while (kolumna < 0 || kolumna > tab.column)
			{
				cout << "Nie ma takiej kolumny! Wprowadz numer kolumny ponownie: ";
				cin >> kolumna;

			}

			cout << "W tej komorce znajduje sie: " << tab.tablica_str[wiersz][kolumna] << endl;
			cout << "Wprowadz nowa wartosc: ";
			cin >> tab.tablica_str[wiersz][kolumna];

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
