#include <iostream>

using namespace std;

namespace {
	float** tab1;

	void show_table(int* r1, int* r2){

		int rr1= *r1;
		int rr2= *r2;
		
			int wyb;
			cout<<"Wybierz 1, by wyswietlic wszystkie elementy tbalicy lub 2 by wybrany element.\n";
			cin>>wyb;

			switch(wyb){
			case 1:
				for(int i=0; i<rr1; i++){
					for(int j=0; j<rr2; j++){
						cout<<tab1[i][j]<<" ";
					}
					cout<<endl;
				}
				break;
			case 2:
				int x, y;
				cout<<"Podaj wspolrzedne:"<<endl<<"Wiersz: ";
				cin>>x;
				while(x<1 || x>rr1){
					cout<<endl<<"Nie ma takiego wiersza, wprowadz inna wspolrzedna: ";
					cin>>x;
				}

				cout<<endl<<"Kolumna: ";
				cin>>y;
				while (y<1 || y>rr1){
					cout<<endl<<"Nie ma takiej kolumny, wprowadz inna wspolrzedna: ";
					cin>>y;
				}
				cout<<tab1[x][y];
				break;
			default:
				break;
			}
	}
}
