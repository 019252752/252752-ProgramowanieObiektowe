#include "main.hpp"
#include "tablica.hpp"
#include <iostream>

using namespace std;
	
void creating_table(Tablica & tab){
	
	float** tablica = new float* [tab.line];
	for (int i = 0; i < tab.column; i++){
		tablica[i] = new float[tab.column];
	}
			
	for (int i = 0; i < tab.line; i++){
		for (int j = 0; j < tab.column; j++){

			tablica[i][j] = zero;
		}
	}
	tab.tablica_str=tablica;
}	

void filling(Tablica & tab){
	
	for (int i = 0; i < tab.line; i++){
		 for (int j = 0; j < tab.column; j++){ 
			tab.tablica_str[i][j]=zero;
		 }
	 }	
}

void removing_table(Tablica & tab){
		
	for (int i = 0; i < tab.line ; i++){
		delete[] tab.tablica_str[i];
	}	
	delete[] tab.tablica_str;
}
	
void table_size(int old1, int old2, Tablica & tab){

	if (tab.line>=old1 || tab.column>=old2){
		float** tab_copy = new float* [tab.line];

		for (int i = 0; i < tab.column; i++){
			tab_copy[i] = new float[tab.column];
		}
		for (int i = 0; i < tab.line; i++){
			for (int j = 0; j < tab.column; j++){
				tab_copy[i][j] = 0;
			}
		}
		for (int i = 0; i < old1; i++){
			for (int j = 0; j < old2; j++){
				tab_copy[i][j] = tab.tablica_str[i][j];
			}
		}	
		for(int i=0; i < old2; i++){
			delete[] tab.tablica_str[i];
		}	
		delete[] tab.tablica_str;

		tab.tablica_str = tab_copy;
			
		for(int i=0; i < tab.column; i++){
			delete[] tab_copy[i];
		}
			
		delete[] tab_copy;
	}
	else{
		cout << endl << "Podaj nowe wieksze wymiary." << endl;
	}
}

void updating(Tablica & tab){

	int wiersz, kolumna;
	int koniec = 0;
		
	cout << "Rozmiar obecnej tablicy: " << tab.line << "x" << tab.column << endl;

	while (koniec == 0){

		cout << "Ktory element tablicy chcesz edytowac?" << endl;
		cout << "Numer wiersza: ";

		cin >> wiersz;
		while (wiersz  < 0 || wiersz > tab.line){
			cout << "Niepoprawny numer wiersza. ";
			cin >> wiersz;
		}
		cout << "Numer kolumny: ";
		cin >> kolumna;
		while (kolumna < 0 || kolumna > tab.column){
			cout << "Nipoprawny numer kolumny. ";
			cin >> kolumna;

		}
		cout << "Wartosc komorki: " << tab.tablica_str[wiersz][kolumna] << endl;
		cout << "Wprowadz nowa wartosc: ";
		cin >> tab.tablica_str[wiersz][kolumna];

		cout << endl << "Wybierz 1. by edytowac dalej lub dowolny inny przycisk, by skonczyc edytowanie. ";
		cin >> koniec; 

		if (koniec == 1){
			koniec = 1;
		}
		else{
			koniec = 0;
		}
	}
}
