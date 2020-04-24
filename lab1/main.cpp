#include <iostream>
#include "tablica.cpp"
#include "tablica_wysw.cpp"
#include "menu.cpp"

using namespace std;

int main(){
	int a=5;
	int choice;
	int size1, size2, newsize1, newsize2;

	menu_start();
	cout<<"Podaj ilosc wierszy: ";
	cin>>size1;
	cout<<"Podaj ilosc kolumn: ";
	cin>>size2;

	float** table;

	create_table(&size1, &size2);

	table=tab;
	tab1=table;

	for(int i=0; i<size1; i++){
		for(int j=0; j<size2; j++){
			table[i][j]=0;
		}
	}

	tab=table;
	tab1=table;


	while(a!=1){
		table=tab;
		tab1=table;

		menu();
		cin>>choice;
		
		switch(choice){
		case 1:
			tab=table;
		
			removing_table(&size2);

			cout<<"Podaj ilosc wierszy: ";
			cin>>size1;
			cout<<"Podaj ilosc kolumn: ";
			cin>>size2;

			create_table(&size1, &size2);
			break;
		case 2:
			cout<<"Podaj nowa ilosc wierszy: ";
			cin>>newsize1;
			cout<<"Podaj nowa ilosc kolumn: ";
			cin>>newsize2;

			table_resize(newsize1, newsize2, &size1, &size2);

			size1=newsize1;
			size2=newsize2;
			break;
		case 3:
			data_update(&size1, &size2);
			break;
		case 4:
			show_table(&size1, &size2);
			break;
		case 5:
			a=1;
			break;
		default:
			a=1;
			break;
		}
	}
	for(int i=0; i<size2; i++) delete[] table[i];

	delete[] table;
	
	return 0;
}
