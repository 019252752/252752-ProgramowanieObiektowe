#ifndef cell_h
#define cell_h
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Cell{
	friend class Tablica;
	
	private:
		float floatvalue;
		string stringvalue;
		int which;
	public:
		void floatFunction (float val);
		
		void stringFunction (string val);
		
		float floatOut();
		
		string stringOut();		
};
#endif
