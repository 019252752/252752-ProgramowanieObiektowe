#include "Array_class.h"

void Array::display(void){
	for(int i = 0; i<columns; ++i){
		for(int j=0; j<rows; ++j) cout<<array[i][j]<<" ";
		cout<<endl;
	}
}

int Array::changeData(int xPos , int yPos, int new_data){
	if(yPos>rows || xPos>columns || xPos<0 || yPos<0) return 1;
	else array[xPos][yPos] = new_data;
	return 0;
}

int Array::changeSize(int new_width, int new_height){
	int** column_ptr = new int*[new_height];
	int* row_ptr;

	if(xPos<0 || yPos<0) return 1;

	else{
		for(int column=0; column<columns; ++column){
			for (int row=0; row<rows; ++row){
				row_ptr=new int[new_width];
				row_ptr[row]=array[column][row];
			}
			column_ptr[column]=row_ptr;
		}
		delete[] array;

		for(int column=columns; column<new_height; ++column){
			row_ptr = new int[new_width];

			column_ptr[column] = row_ptr;
		}
		columns=new_height;
		rows=new_width;
		array=column_ptr;
	}
	return 0;
}

void Array::write(void){
	fstream outfile;
	outfile.open(FILE, ios::out);

	for(int i=0; i<columns; ++i){
		for(int j=0; j<rows; ++j) outfile<<array[i][j]<<" ";

		outfile << endl;
	}
	outfile.close();
}

void Array::read(void){
	fstream infile;
	infile.open(FILE, ios::in);

	infile.close();
}
