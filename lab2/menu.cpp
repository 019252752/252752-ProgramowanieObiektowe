#include <iostream>

using namespace std;

namespace {

	void menu_start(){
		cout<<"Podaj wspolrzedne poczatkowej tabeli." << endl;
	}
	void menu(){
		cout<<"Wybierz: "<< endl;
		cout<<"1. by stworzyc nowa tabele (stara zostanie usunieta),"<<endl<<"2. by zmienic rozmiar istniejacej tabeli,"<<endl<<"3. by zaktualizowac dane w tabeli,"<<endl<<"4. by wyswietlic zawartosc tabeli,"<<endl<<"5. by zakonczyc prace programu."<<endl<<endl;	
	}
}
