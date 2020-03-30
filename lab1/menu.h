#ifndef menu_h
#define menu_h

#include <iostream>
#include "tablica.h"

using namespace std;
  vector<vector<int>> table{{1,2,3},
	                                {1,2,3},
					{1,2,3}};

  class Menu
{
	public:
		static bool Choice();
		static void mainMenu();
		static void sizeChangeMenu();
		static void dataChangeMenu();
};
  
  void Menu::dataChangeMenu()
{
	  int aPos;
	  int bPos;
	  int new_data;

	    cout << "Numer wiersza:" << endl;
	    cin >> bPos;
	    cout << "Numer columny:" << endl;
	    cin >> aPos;
	    cout << "new data" << endl;
	    cin >> new_data;

	      Table::changeData(table, aPos, bPos, new_data);
}

   void Menu::sizeChangeMenu()
{
	int new_width;
	int new_height;

	  cout << "Podaj dlugosc tablicy:" << endl;
	  cin >> new_width;
	  cout << "Podaj szerokosc tablicy:" << endl;
	  cin >> new_height;

	  Table::changeSize(table, new_width, new_height);
}

 void Menu::mainMenu()
{
	 cout << "Menu:" << endl;
	 cout << "1.Rozmiar" << endl;
	 cout << "2.Dane" << endl;
	 cout << "3.Wyswietlenie" << endl;
}

bool Menu::Choice()
{
	char value;

	  Menu::mainMenu();

	  cin >> value;
	  switch(value)
	  {
		  case '1':
			  Menu::sizeChangeMenu();
			  break;

		  case '2':
			  Menu::dataChangeMenu();
			  break;

		  case '3':
			  Table::display(table);
			  break;

		  default:
			  return 1;
break;
	  }
	  return 1;
}
#endif
