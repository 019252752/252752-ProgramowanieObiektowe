#include "Cell_class.h"
#include "Array_class.h"
#include "menu.h"

int menu(){

	int m=0;	
	cout << endl <<"MENU:" << endl;
	cout << "1. Stworz nowa tabele (usun poprzednia)." << endl;
	cout << "2. Zmien rozmiar." << endl;
	cout << "3. Aktualizuj elementy tabeli." << endl;
	cout << "4. Wyswietl tabele." << endl;
	cout << "5. Operacje matematyczne" << endl;
	cout << "6. Zakoncz program" << endl;
	cin >> m;
					
	return m;
}

int typeMenu(){
	int t=0;
		
	cout << "Stworz/wczytaj arkusz z:"<< endl;
	cout << "1. Liczbami." << endl << "2. Slowami." << endl;
		
	while(t!=1 && t!=2){
		cout << "Wybierz 1 lub 2." << endl;
		cin >> t;
	}
		
	return t;
}
	
void interface_type_choose(){
		
	cout << endl <<"Dla kolumny liczbowej wybierz 0, a dla tekstowej wybierz 1." << endl;		
}

int menu_operations(){
	
	int m;
	cout << "1. Zsumuj elementy w wybranym wierszu." << endl; 
	cout << "2. Zsumuj elementy w wybranej kolumnie."<< endl;
	cout << "3. Znajdz najmniejszy element" << endl;
	cout << "4. Znajdz najwiekszy element" << endl ;
	cout << "5. Policz srednia" << endl;
	cout << "6. Wroc do menu" << endl;
	cin >> m;
	
	return m;
}

void interface(int x){
			
	switch(x){
		case 1: 
			cout << "FILES ERROR" << endl;
			break;
		case 2:
			cout << endl << "Nowe wymiary musza byc wieksze od starych." << endl << "FATAL ERROR" << endl;
			break;
		default:
			break;
	}
}

void interface_aktualizowanie(int x){
	
	switch(x){
		case 1:
			cout << "Rozmiar tablicy:" << endl;
			break;
		case 2:
			cout << "Wybierz element do zmiany." << endl;
			cout << "Podaj numer wiersza:" << endl;
			break;
		case 3:
			cout << "Nieprawidlowy element, sprobuj jeszcze raz:" << endl;
			break;
		case 4:
			cout << "Podaj numer kolumny:" << endl;
			break;
		case 5:
			cout << "Zawartosc komorki:" << endl;
			break;
		case 6:
			cout << "Nowa wartosc:" << endl;
			break;
		case 7:
			cout << endl << "Wybierz 1, by zakonczyc zmiany lub inny przycisk, by kontynuowac." << endl;
			break;
	}
}

void interface_how(int x){

	switch(x){
		case 1:
			cout << "Podaj ilosc wierszy:" << endl;
			break;
		case 2:
			cout << "Podaj ilosc kolumn: " << endl;
			break;
		case 3:
			cout << endl << "Wprowadzono bledno wartosc, wpisz poprawna jeszcze raz." <<  endl;
			break;
	}
}

void interface_wysw(int x){

	switch(x){
		case 1:
			cout << endl << "Kolumna:" << endl;
			break;
		case 2:
			cout << "Podaj wspolrzedne:" << endl << "Wiersz:";
			break;
		case 3:
			cout << endl << "Nieprawidlowa wspolrzedna, sprobuj ponownie:";
			break;
	}
}

void interface_add(int x){

	switch(x){
		case 1:
			cout << endl << "Wierz do zsumowania.";
			cout << endl << "Nr wiersza:";
			break;
		case 2:
			cout <<endl << "Blad, sprobuj ponownie:";
			break;
		case 3:
			cout << endl << "Suma:";
			break;
		case 4:
			cout << endl << "Ktora kolumne chcesz zsumowac?";
			out << endl << "Nr kolumny: ";
			break;
	}
}

void interface_min(int x){

	switch(x){
		case 1:
			cout << "Dla minimum w wierzu wybierz 1." << endl <<"Dla minimum w kolumnie wybierz 2" << endl;
			break;
		case 2:
			cout << "Najmniejszy elelement:" << endl;
			break;
		case 3:
			cout << endl << "Wpisz numer:" << endl;
			break;
	}
}

void interface_max(int x){

	switch(x){
		case 1:
			cout << "Dla maximum w wierszu wybierz 1." << endl <<"Dla maximum w kolumnie wybierz 2." << endl;
			break;
		case 2:
			cout << "Najwiekszy elelement to:" << endl;
			break;
	}
}

void interface_av(int x){

	switch(x){
		case 1:
			cout << "Dla sredniej w wierszu wybierz 1. Dla sredniej w kolumnie wybierz 2." << endl;
			break;
		case 2:
			cout << "Srednia wszystkich elementow:" << endl;
			break;
		case 3:
			cout << endl << "Wpisz numer:" << endl;
			break;
	}
	
}

void operations_check(int x){
	
	if(x==0){
		cout << endl << "Wystapil blad podczas dzialania." << endl;
	}
}
