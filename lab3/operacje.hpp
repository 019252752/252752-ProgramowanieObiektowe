#ifndef operations_hpp
#define operations_hpp
#include <iostream>

/**
* @param[in] Tablica tab - struktura 
* @return sum - suma elementow w wierszu
*/

void addition_line (Tablica & tab);

/**
* @param[in] Tablica tab - struktura 
* @return sum - suma elementow w kolumnie
*/

void addition_column (Tablica & tab);

/**
* @param[in] Tablica tab - struktura 
* @-param[out] min - minimum w tablicy
*/

void minimum (Tablica & tab);

/**
* @param[in] Tablica tab - struktura 
* @param[out] max - maximumw tablicy
*/

void maximum (Tablica & tab);

/**
* @param[in] Tablica tab - struktura 
* @param[out] srednia wszystkich elementow
*/

void average (Tablica & tab);



#endif
