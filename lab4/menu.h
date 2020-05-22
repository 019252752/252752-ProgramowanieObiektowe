#ifndef Menu_h
#define Menu_h

#include <iostream>
#include "Array_class.h"

using namespace std;

class Menu{
private:
  Array* array;

  void sizeChangeMenu(void);
  void dataChangeMenu(void);

public:
  Menu(Array*);

  int ask(void);
  void print(void);
  int execute(char);
};
#endif
