#include <iostream>
#include <fstream>

using namespace std;

namespace{
	
	float** table_save;
	int x, y;
	int* x_ind;
	int* y_ind;
	
	void size_open(){
	
	fstream size_file;
	size_file.open("size.txt", ios::in);
	
	if(size_file.good()){
	
		size_file >> x;
		size_file >> y;
	
		x_ind=&x;
		y_ind=&y;
		}
		else {
			cout << "Blad otwierania pliku size.txt";
		}
		
		size_file.close();
	}
	
	void file_open(int size_line, int size_column){
	
	fstream file;
	file.open("savefile.txt", ios::in);
	
	if(file.good()){
	
		for(int i=0; i<size_line; i++){
			for(int j=0; j<size_column; j++){
	
				file>>table_save[i][j];
			} 
		}
	}
	else{
		cout<<"Blad otwierania pliku savefile.txt";
	}
	
	file.close();
	}
	
	
	void size_close(int size_line, int size_column){
	
		fstream size_file_close;
		size_file_close.open("size.txt", ios::out | ios::trunc);
	
	
		if(size_file_close.good()){
	
		
		size_file_close << size_line;
		size_file_close << " ";
		size_file_close << size_column;
		
	
	
		}
		else{
			cout<<"Blad wczytywania pliku.";
		}
		
		size_file_close.close();
	}
	
	
	void file_close(int size_line, int size_column){
	
		fstream file_close;
		file_close.open("savefile.txt", ios::out | ios::trunc);

		if(file_close.good()){
	
			for(int i=0; i< size_line; i++){
				for(int j=0; j< size_column; j++){
			
					file_close<<table_save[i][j];
					file_close<<" ";
				}	
			}
		}
		else{
			cout<<"Blad wczytywania pliku.";
		}	
		file_close.close();
	}
}
