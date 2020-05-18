#ifndef zapisywanie_hpp_
#define zapisywanie_hpp_
#include <iostream>
#include <fstream>

/**
* @param[in] Tablica tab - struktura 
* @param[out] tab.line - ilosc wierszy tablicy
* @param[out] tab.column - ilosc kolumn tablicy
*/

void size_open(Tablica & tab);

/**
* @param[in] Tablica tab - struktura 
* @param[out] tab.tablica_str[i][j] - tablica z elementami
*/

void file_open(Tablica & tab);

/**
* @param[in] Tablica tab - struktura 
*/

void size_close(Tablica & tab);

/**
* @param[in] Tablica tab - struktura 
*/

void file_close(Tablica & tab);

#endif
