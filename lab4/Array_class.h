#ifndef Table_h
#define Table_h

#include <iostream>
#include <fstream>

#define FILE "file.txt"

using namespace std;

class Array{
private:
	int **array,
	rows=0,
        columns=0;

public:
	int changeSize(int, int);
	int changeData(int, int, int);
	void display(void);
	void write(void);
	void read(void);
};
#endif
