#ifndef Menu_h
#define Menu_h

#include <iostream>
#include "Array_class.h"

using namespace std;

template <class Type>
class Menu final{
	private:
  		Array<Type>* array;

  		void sizeChangeMenu(void);
  		void dataChangeMenu(void);

	public:
  		Menu();

  		int ask(void);
  		void print(void);
  		int execute(int);
};


template <class Type>
Menu<Type>::Menu() { array = new Array<Type>(); }

template <class Type>
void Menu<Type>::dataChangeMenu(void){
	int xPos, yPos;

	Type new_data;

	cout << "Numer kolumny: ";
	cin >> yPos;
	cout << "Numer wiersza: ";
	cin >> xPos;
	cout << "Podaj nowa wartosc: ";
	cin >> new_data;

	array->changeData(xPos, yPos, new_data);

	check=changeData(xPos, yPos, new_data);
	if(check==1){
		cout<<"Podales bledna wartosc kolumny lub wiersza."<<endl;
	}
}

template <class Type>
void Menu<Type>::sizeChangeMenu(void){
	int new_width, new_height, check;

	cout << "Podaj nowa wysokosc: " << endl;
	cin >> new_width;
	cout << "Podaj nowa szerokosc: " << endl;
	cin >> new_height;

	array->changeSize(new_width, new_height);

	check=changeSize(new_width, new_height);
	if(check==1){
		cout<<"Podales nieprawidlowa wysokosc lub szerokosc."<<endl;
	}
}

template <class Type>
void Menu<Type>::print(void){
	cout << endl;
	cout << "MENU:" << endl;
	cout << "0.Zakoncz program." << endl;
	cout << "1.Zmien wielkosc." << endl;
	cout << "2.Zmien wartosc komorki." << endl;
	cout << "3.Wyswietl." << endl;
	cout << "4.Zapisz do pliku." << endl;
	cout << "5.Wczytaj z pliku." << endl;
	cout << endl;
}

template <class Type>
int Menu<Type>::ask(void){
	int choice;
	cout << "Podaj wybor: ";
	cin >> choice;

	return choice;
}

template <class Type>
int Menu<Type>::execute(int choice){
	switch(choice){
		case 0:
			return 0;

		case 1:
			sizeChangeMenu();
			break;

		case 2:
			dataChangeMenu();
			break;

		case 3:
			array->display();
			break;

		case 4:
			array->write();
			break;

		case 5:
			array->read();
			break;
	}
	return 1;
}
#endif
