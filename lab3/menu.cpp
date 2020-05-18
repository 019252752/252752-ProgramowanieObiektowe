#include "main.h"
#include "menu.h"
#include <iostream>

using namespace std;

int menu(){

	int m=0;
	
	cout << "Wybierz:" << endl;
	cout << "1. By stworzyc nowa tabele (poprzednia zostanie usunieta)," << endl <<
		"2. By zmienic rozmiar istniejacej tabeli," << endl <<
		"3. By zaktualizowac istniejace elementy w tabeli," << endl <<
		"4. By wyswietlic zawartosc tabeli," << endl
		<< "5. By wykonac operacje matematyczne," << endl
		<< "6. By zakonczyc program." << endl;

	cin >> m;				
	return m;
}

void how(Tablica & tab){
	int z=0;
	int w=0;
		
	while(z<1){
			
		cout << "Podaj ilosc wierszy: ";
		cin >> z;
		
		if(z<1){
			cout << endl << "Niepoprana ilosc, podaj inna." <<  endl;
			
		}
		
	}
		
	while(w<1){
								
		cout << "Podaj ilosc kolumn: ";
		cin >> w;
				
		if(w<1){
			cout << endl << "Niepoprana ilosc podaj." <<  endl;
		}
	}
	tab.line=z;
	tab.column=w;
}


int menu_operations(){
	
	int m;
	
	cout << "Wybierz:" << endl;
	cout << "1. By zsumowac elementy w wybranym wierszu." << endl 
	<< "2. By Zsumowac elementy w wybranej kolumnie."<< endl
	<< "3. By znalezc najmniejszy element w tabeli" << endl
	<< "4. By znalezc najwiekszy element w tabeli" << endl 
	<<  "5. By policzyc srednia wszystkich elementow" << endl
	<< "6. By wrocic do menu" << endl;
	
	cin >> m;
	
	return m;
}

		
