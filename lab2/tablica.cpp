#include <iostream>

using namespace std;

namespace {
	float** tab;

	void create_table(int* r1, int* r2){
		int size1= *r1;
		int size2= *r2;

		float** tablica= new float* [size1];
			for(int i=0; i<size2; i++) tablica[i]= new float[size2];

			for(int i=0; i<size1; i++){
				for(int j=0; j<size2; j++){
					tablica[i][j]= 0;
					}
			}

		*r1=size1;
		*r2=size2;
		tab=tablica;
	}

	void removing_table(int* columns_number){
		int num= *columns_number;
		for(int i=0; i<num; i++) delete[] tab[i];

		delete[] tab;
	}

	void table_resize(int new1, int new2, int* rozmiar1, int* rozmiar2){

		int r1= *rozmiar1;
		int r2= *rozmiar2;

		if(new1>=r1 || new2>=r2){
			float** tab_copy= new float* [new1];

			for(int i=0; i<new2; i++)
				tab_copy[i]= new float[new2];

			for(int i=0; i<new1; i++){
				for(int j=0; j<new2; j++){
					tab_copy[i][j]= 0;
				}
			}

			for(int i=0; i<r1; i++){
				for(int j=0; j<r2; j++) tab_copy[i][j]= tab[i][j];

			}
			removing_table(rozmiar2);

			tab=tab_copy;
		}
		else{
			cout<<endl<<"Nowe wymiary musza byc wieksze od poprzednich!"<<endl;
		}
	}

	void data_update(int* rozmiar1, int* rozmiar2){

		int line, column;
		bool end=true;
		int endcondition;
		int wiersz= *rozmiar1;
		int kolumna= *rozmiar2;

		cout<<"Rozmiar tablicy to: "<<wiersz<<"x"<<kolumna<< endl;

		while(end){
			cout<<"Podaj wspolrzedne elementu do zmiany."<<endl;
			cout<<"Wpisz numer wiersza: ";

			cin>>line;
			while (line<0 || line>=wiersz){
				cout<<"Nie ma takiego wiersza! Wprowadz numer wiersza ponownie: ";
				cin>>line;
			}

			cout<<"Wpisz numer kolumny: ";

			cin>>column;
			while(column<0 || column>=kolumna){
				cout<<"Nie ma takiej kolumny! Wprowadz numer kolumny ponownie: ";
				cin>>column;
			}

			cout<<"W tej komorce znajduje sie: "<<tab[line][column]<<endl;
			cout<<"Wprowadz nowa wartosc: ";
			cin>>tab[line][column];

			cout<<endl<<"Podaj 1, by zakonczyc zmiany lub inna cyfre by zmienic kolejne dane.";

			cin>>endcondition; 

			if(endcondition==1){
				end=false;
			}
		}
	}
}
