#include "main.hpp"
#include "tablica_wysw.hpp"
#include <iostream>

using namespace std;
	
void showing_table(Tablica & tab) {
		
	int wyb;
	cout << "Wybierz 1. by wyswietlic wszystkie elementy lub 2. by jeden konkretny." << endl <<
		"1. Wszystkie" << endl << "2. Wybrany" << endl;

	cin >>wyb;

	switch (wyb){
		case 1:
			cout << " |";
			for(int i=0; i < tab.line ; i++){	
				cout <<i;
				cout <<"|";
			}
			cout <<endl;
			for(int a=0; a <=tab.column; a++){
				cout <<"==";
			}
			cout << endl;
			
			for (int i = 0; i < tab.line; i++){
				cout << i;	
				cout << "|";
				for (int j = 0; j < tab.column; j++){
					cout << tab.tablica_str[i][j] << "|";
				}
				cout << endl;
				for(int a=0; a <=tab.column; a++){
					cout <<"==";
				}
				cout << endl;
			}
			break;
		case 2:
			int x, y;
			cout << "Wprowadz wspolrzedne:" << endl << "Wiersz: ";
			cin >> x;
			while (x<1 || x>tab.line){
				cout << endl << "Niepoprawny nr wiersza. ";
				cin >> x;
			}
			cout << endl << "Kolumna: ";
			cin >> y;
			while (y<1 || y>tab.column){
				cout << endl << "Niepoprawny nr kolumny. ";
				cin >> y;
			}
			cout << tab.tablica_str[x][y];
			break;
		default:
			break;
	}
}
