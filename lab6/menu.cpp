#include "classCell.hpp"
#include "classTablica.hpp"
#include "menu.hpp"

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

	int typeMenu(){
		int t=0;
		
		cout << "Chcesz stworzyc i wczytac arkusz z liczbami czy slowami?"<< endl;
		cout << "1. Liczbami" << endl << "2. Slowami" << endl;
		
		while(t!=1 && t!=2){
			cout << "Wcisnij 1 lub 2";
			cin >> t;
		}
		
		return t;
	}
	
	////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	void interface_type_choose(){
		
		cout << endl <<"Jezeli chcesz zeby kolumna o numerze podanym wyzej byla liczbowa, wcisnij 0. Jezeli chcesz zeby byla tekstowa, wcisnij 1." << endl;
		
		
	}

		
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int menu_operations(){
	
	
	
	int m;
	
	cout << "1. Zsumuj elementy w wybranym wierszu." << endl 
	<< "2. Zsumuj elementy w wybranej kolumnie."<< endl
	<< "3. Znajdz najmniejszy element" << endl
	<< "4. Znajdz najwiekszy element" << endl 
	<<  "5. Policz srednia" << endl
	<< "Wcisnij 6 zeby wrocic do menu" << endl;
	
	cin >> m;
	
 return m;
	
	
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void interface(int x)
{
			
	switch(x)
	{
	case 1: 
		cout << "FILES ERROR";
	break;

	case 2:
		cout << endl << "Nowe wymiary musza byc wieksze od poprzednich!" << endl << "FATAL ERROR";
	break;
		
	default:

	break;
	}

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void interface_aktualizowanie(int x)
{
	
	switch(x)
	{
	
	case 1:
		cout << "Rozmiar obecnej tablicy to: " ;
	break;
	
	case 2:
		cout << "Ktory element tablicy chcesz edytowac?" << endl;
		cout << "Wpisz numer wiersza: ";
	break;
	
	case 3:
		cout << "Taki element nie istnieje, sprobuj ponownie: ";
	break;
	
	case 4:
		cout << "Wpisz numer kolumny: ";
	break;
	
	case 5:
		cout << "W tej komorce znajduje sie: ";
	break;
	
	case 6:
		cout << "Wprowadz nowa wartosc: ";
	break;
	
	case 7:
		cout << endl << "Czy chcesz zakonczyc edycje? Jezeli tak wcisnij 1, jezeli nie kliknij dowolny inny przycisk. ";
	break;
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void interface_how(int x)
{
	switch(x)
	{
	
	case 1:
		cout << "Podaj ilosc wierszy: ";
	break;
	
	case 2:
		cout << "Podaj ilosc kolumn: ";
	break;
	
	case 3:
		cout << endl << "Wprowadzono bledno wartosc, wpisz poprawna jeszcze raz." <<  endl;
	break;
	
	}
	
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void interface_wysw(int x)
{
	switch(x)
	{
	case 1:
		cout << endl << "Kolumna: ";
	break;
	
	case 2:
		cout << "Wprowadz wspolrzedne:" << endl << "Wiersz: ";
	break;
	
	case 3:
		cout << endl << "Nie ma takiej wspolrzednej, wprowadz poprawna: ";
	break;
	
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void interface_add(int x)
{
	switch(x)
	{
	case 1:
		cout << endl << "Ktory wiersz chcesz zsumowac?";
		cout << endl << "Nr wiersza: ";
	break;

	case 2:
		cout <<endl <<" Blad, sprobuj  ponownie: ";
	break;

	case 3:
		cout << endl <<"Suma: ";
	break;
	
	case 4:
		cout << endl << "Ktora kolumne chcesz zsumowac?";
		cout << endl << "Nr kolumny: ";
	break;
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void interface_min(int x)
{
	switch(x)
	{
	case 1:
		cout << "Jezeli chcesz znalezc minimum w wybranym wierszu, wcisnij 1." << endl <<"Jezeli chcesz znalezc minimum w wybranej kolumnie, wcisnij 2";
	break;
	
	case 2:
	cout << "Najmniejszy elelement to: ";
	break;
	
	case 3:
	cout << endl << "Wpisz numer: ";
	break;
	
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void interface_max(int x)
{
		switch(x)
		{
	
	case 1:
		cout << "Jezeli chcesz znalezc maximum w wybranym wierszu, wcisnij 1." << endl <<"Jezeli chcesz znalezc maximum w wybranej kolumnie, wcisnij 2";
	break;
	
	case 2:
		cout << "Najwiekszy elelement to: ";
	break;
	
		}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////

void interface_av(int x)
{
	switch(x)
	{
	case 1:
		cout << "Jezeli chcesz wyliczyc srednia w wybranym wierszu wcisnij 1. Jezeli chcesz wyliczyc srednia w wybranej kolumnie wcisnij 2." << endl;
	break;
	
	case 2:
		cout << "Srednia wszystkich elementow wynosi: ";
	break;
	
	case 3:
		cout << endl << "Wpisz numer: ";
	break;

	}
	
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

void operations_check(int x){
	
	if(x==0){
		cout << endl << "W czasie przeprowadzania dzialania wystapil blad (nie mozna zsumowac komorek zawierajacych litery)" << endl;
	}
}
