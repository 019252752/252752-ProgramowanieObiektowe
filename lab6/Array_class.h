#ifndef main_hpp
#define main_hpp
#include <iostream>
#include <fstream>
#include <string>
using namespace std;





class Tablica
{
	
	friend class Cell;
	
	private:
	
	/**
	* @param line - ilosc wierszy tablicy
	* @param column - ilosc kolumn tablicy
	* @param old1, old2 - pomocnicze parametry zawierajace koljeno ilosc wierszy i kolumn
	*/
	
		
		
		int line;
		int column;
		int old1, old2;
		
	public:
	
	/**
	*@param string*types - tablica stringow
	*@param Cell* cellArr - tablica obiektow klasy Cell
	*/
		string* types;
	
		Cell** cellArr;
	
	/**
	* Ponizsze funkcje obsluguja tablice stringow types
	*@param[out] string* types;
	*/
	void type_create();
	
	void type_choose();
	
	void removing_type();
	
	
	/**
	* Metody ponizej znajduja sie w pliku tablica.cpp
	*/
	
	/**
	*@param[out] line, column, old1, old2
	*/
	
		void how();
	
	/**
	*@param[out] tablica-str
	*@param[in] line, column
	*/
	
		void tablica_powstanie();
		
	
		
	/**
	*@param[in] tablica-str
	*@param[in] line, column
	*/
	
		void removing_table();
		
	/**
	*@param[in] old1, old2
	*@param[in, out] tablica-str
	*@param[in, out] line, column
	*/
	
		int tablica_rozmiar();
		
	/**
	*@param[in, out] tablica-str
	*@param[in] line, column
	*/
	
		void aktualizowanie();
		
	/**
	* Metoda ponizej znajduje sie w pliku tablica_wysw.cpp
	*@param[in] tablica-str
	*@param[in] line, column
	*/
	
		void wyswietlanie();
		
	/**
	* Metody ponizej znajduja sie w zapisywanie.cpp
	*@param[in, out] line, column
	*/
	
		int size_open();
		
	/**
	*@param[in, out] tablica-str
	*@param[in] line, column
	*/
	
		int file_open();
		
	/**
	*@param[in] line, column
	*/
	
		int size_close();
		
	/**
	*@param[in] line, column
	*@param[in] tablica-str
	*/
	
		int file_close();
	
	/**
	* Metody ponizej znajduja sie w operations.cpp
	*@param[in] line, column
	*@param[in] tablica-str
	*/
	
		int addition_line ();
		void addition_column ();
		int minimum();
		int maximum ();
		int average ();
		
		
		
		
};




#endif
