#ifndef menu_hpp_
#define menu_hpp_
#include <iostream>
#include <fstream>

/**
* @return m - wartosc wpisana przez uzytkownika
*/

int menu();

/**
* @param[in, out] Tablica tab - struktura 
* @param[out] tab.line - ilosc wierszy w tablicy
* @param[out] tab.column - ilosc kolumn w tablicy
*/

void how(Tablica & tab );

/**
* @return m - wartosc wpisana przez uzytkownika
*/

int menu_operations();

#endif
