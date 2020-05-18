#ifndef tablica_hpp_
#define tablica_hpp_
#include <iostream>
#include <fstream>

float const zero = 0;

/**
* @param[in] Tablica tab - struktura 
* @param[out] tab.tablica_str - utworzona tablica
*/

void tablica_powstanie(Tablica & tab);

/**
* @param[in] Tablica tab - struktura 
* @param[out] tab.tablica_str - utworzona tablica z elementami 0
*/

void filling(Tablica & tab);

/**
* @param[in] Tablica tab - struktura 
*/

void removing_table(Tablica & tab);

/**
* @param[in] Tablica tab - struktura 
* @param[out] tab.tablica_str - tablica ze zmienionym rozmiarem
*/

void tablica_rozmiar(int old1, int old2, Tablica & tab);

/**
* @param[in] Tablica tab - struktura 
* @param[out] tab.tablica_str - tablica z zaktualizowanymi elementami
*/

void aktualizowanie(Tablica & tab);



#endif
