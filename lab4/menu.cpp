#include "menu.h"

Menu::Menu(Array* new_array){
	array=new_array;
}

void Menu::dataChangeMenu(void){
	int xPos, yPos, new_data, check;

	cout<<"Numer kolumny:"<<endl;
	cin>>yPos;
	cout<<"Numer wiersza:"<<endl;
	cin>>xPos;
	cout<<"Podaj nowa wartosc:"<<endl;
	cin>>new_data;

	array->changeData(xPos, yPos, new_data);

	check=changeData(xPos, yPos, new_data);
	if(check==1){
		cout<<"Podales bledna wartosc kolumny lub wiersza."<<endl;
	}
}

void Menu::sizeChangeMenu(void){
	int new_width, new_height, check;

	cout<<"Podaj nowa wysokosc:"<<endl;
	cin >> new_width;
	cout << "Podaj nowa szerokosc:" << endl;
	cin >> new_height;

	array->changeSize(new_width, new_height);
	check=changeSize(new_width, new_height);
	if(check==1){
		cout<<"Podales nieprawidlowa wysokosc lub szerokosc."<<endl;
	}
}

void Menu::print(void){
	cout<<"MENU:"<<endl;
	cout<<"1.Zmien wielkosc."<<endl;
	cout<<"2.Zmien wartosc komorki."<<endl;
	cout<<"3.Wyswietl."<<endl;
	cout<<"4.Zapisz do pliku."<<endl;
	cout<<"5.Wczytaj dane z pliku."<<endl;
	cout<<endl;
}

int Menu::ask(void){
	int choice;
	cout<<"Podaj wybor: ";
	cin>>choice;

	return choice;
}

int Menu::execute(int choice){
	switch(choice) {
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

		default:
			return 0;
	}
	return 1;
}
