#ifndef Table_h
#define Table_h

#include <iostream>
#include <fstream>
#include "Cell_class.h"

#define FILE "file.txt"

using namespace std;

template <class Type>
class Array final{
	private:
		Cell<Type> **array;
		int rows=0,
        	columns=0;

	public:
		void changeSize(int, int);
		void changeData(int, int, Type);
		void display(void);
		void write(void);
		void read(void);
};

template <class Type>
void Array<Type>::display(void){
	for(int i=0; i<rows; ++i){
		for(int j=0; j<columns; ++j){
			cout<<array[j][i]<<" ";
		}
		cout<<endl;
	}
}

template <class Type>
int Array<Type>::changeData(int xPos , int yPos, Type new_data){
	if (yPos > rows || xPos > columns || xPos < 0 || yPos < 0){
		return 1;
	}
	else array[xPos][yPos].setData(new_data);
	return 0;
}

template <class Type>
int Array<Type>::changeSize(int new_width, int new_height){
	Cell<Type>** column_ptr = new Cell<Type>*[new_height];
	Cell<Type>* row_ptr;

	if(new_width<0 || new_height<0){
		return 1;
	}
	else{
		for(int column = 0; column < columns; ++column){
			for (int row = 0; row < rows; ++row){
				row_ptr = new Cell<Type>[new_width];
				row_ptr[row] = array[column][row];
			}
			column_ptr[column] = row_ptr;
			delete[] array[column];
		}
		delete[] array;
		for (int column = columns; column < new_height; ++column){
			row_ptr = new Cell<Type>[new_width];

			column_ptr[column] = row_ptr;
		}
		columns = new_height;
		rows = new_width;
		array = column_ptr;
	}
	return 0;
}

template <class Type>
void Array<Type>::write(void){
	fstream outfile;
	outfile.open(FILE, ios::out);

	for(int i = 0; i < columns; ++i){
		for(int j = 0; j < rows; ++j) outfile << array[i][j] << " ";
		outfile << endl;
	}
	outfile.close();
}

template <class Type>
void Array<Type>::read(void){
	fstream infile;
	infile.open(FILE, ios::in);
	infile.close();
}
#endif
