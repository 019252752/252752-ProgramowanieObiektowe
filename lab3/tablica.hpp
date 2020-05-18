#ifndef tablica_hpp_
#define tablica_hpp_
#include <iostream>
#include <fstream>

float const zero = 0;

void tablica_powstanie(Tablica & tab);

void filling(Tablica & tab);

void removing_table(Tablica & tab);

void tablica_rozmiar(int old1, int old2, Tablica & tab);

void aktualizowanie(Tablica & tab);

#endif
