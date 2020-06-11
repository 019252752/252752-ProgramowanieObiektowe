#ifndef cell_hpp
#define cell_hpp
#include <iostream>
#include <fstream>
#include <string>
using namespace std;






class Cell
{
	friend class Tablica;
	
	private:
	
	/**
	*@param floatvalue - zmienna zawierajaca element float komorki
	*@param stringvalue - zmienna zawierajaca element string komorki
	*@param which - przyjmuje wartosc 1 lub 2 w zaleznosci od typu elementu (zmienna pomocnicza)
	*/
	
		float floatvalue;
		string stringvalue;
		int which;
		
	public:
	
	/**
	*Funkcje do zmainy wartosci param floatvalue i stringvalue
	*@param[out,in] val, floatvalue, stringvalue
	*/
		void floatFunction (float val);
		
		void stringFunction (string val);
		
	/**
	*Funkcje do zwracania wartosci zmiennych floatvalue i stringvalue
	*	@param[in] floatvalue, stringvalue
	*/

	
		float floatOut();
		
		
		string stringOut();
			
};

#endif
