#ifndef main_h
#define main_h
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Tablica{
	
	friend class Cell;
	private:
		int line;
		int column;
		int old1, old2;
	public:
		string* types;
	
		Cell** cellArr;

		void type_create();
	
		void type_choose();
	
		void removing_type();
	
		void how();
	
		void tablica_powstanie();
	
		void removing_table();
		
		int tablica_rozmiar();
		
		void aktualizowanie();
		
		void wyswietlanie();
		
		int size_open();
		
		int file_open();
		
		int size_close();
		
		int file_close();
	
		int addition_line ();

		void addition_column ();

		int minimum();

		int maximum ();

		int average ();	
};
#endif
