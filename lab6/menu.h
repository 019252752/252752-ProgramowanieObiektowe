#ifndef Menu_h
#define Menu_h

#include <iostream>
#include "Array_class.h"

using namespace std;

template <class FirstType, class SecondType, class ThirdType>
class Menu final{
	private:
  		Array<FirstType>* firstTypeArray;
  		Array<SecondType>* secondTypeArray;
  		Array<ThirdType>* thirdTypeArray;

  		void sizeChangeMenu(void);
  		void dataChangeMenu(void);

	public:
  		Menu();

  		int ask(void);
  		void print(void);
  		int execute(int);
};


template <class FirstType, class SecondType, class ThirdType>
Menu<FirstType, SecondType, ThirdType>::Menu(){
	firstTypeArray = new Array<FirstType>();
	secondTypeArray = new Array<SecondType>();
	thirdTypeArray = new Array<ThirdType>();
}

template <class FirstType, class SecondType, class ThirdType>
void Menu<FirstType, SecondType, ThirdType>::dataChangeMenu(void){
	int xPos, yPos;

	FirstType firstTypeData;
	SecondType secondTypeData;
	ThirdType thirdTypeData;

	cout << "Numer kolumny: ";
	cin >> yPos;
	cout << "Numer wiersza: ";
	cin >> xPos;
	cout << "Nowa dana: ";

	switch (xPos){
		case 0:
			cin >> firstTypeData;
			firstTypeArray->changeData(xPos, yPos, firstTypeData);
			break;

		case 1:
			cin >> secondTypeData;
			secondTypeArray->changeData(xPos, yPos, secondTypeData);
			break;

		case 2:
			cin >> thirdTypeData;
			thirdTypeArray->changeData(xPos, yPos, thirdTypeData);
			break;

		default :
			std::cout << "Podaj ponownie numer kolumny: " << std::endl;
	}
}

template <class FirstType, class SecondType, class ThirdType>
void Menu<FirstType, SecondType, ThirdType>::sizeChangeMenu(void) {
	int new_width;

	cout << "Podaj nowa szerokosc: " << endl;
	cin >> new_width;

	firstTypeArray->changeSize(new_width);
	secondTypeArray->changeSize(new_width);
	thirdTypeArray->changeSize(new_width);
}

template <class FirstType, class SecondType, class ThirdType>
void Menu<FirstType, SecondType, ThirdType>::print(void) {
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

template <class FirstType, class SecondType, class ThirdType>
int Menu<FirstType, SecondType, ThirdType>::ask(void) {
	int choice;

	cout << "Podaj wybor: ";
	cin >> choice;

	return choice;
}

template <class FirstType, class SecondType, class ThirdType>
int Menu<FirstType, SecondType, ThirdType>::execute(int choice){
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
			firstTypeArray->display();
			secondTypeArray->display();
			thirdTypeArray->display();
			break;

		case 4:
			firstTypeArray->write();
			secondTypeArray->write();
			thirdTypeArray->write();
			break;

		case 5:
			firstTypeArray->read();
			secondTypeArray->read();
			thirdTypeArray->read();
			break;
	}
	return 1;
}
#endif
