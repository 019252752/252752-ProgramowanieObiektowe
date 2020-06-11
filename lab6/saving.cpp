#include "classCell.hpp"
#include "classTablica.hpp"
#include "menu.hpp"
	
	int Tablica::size_open()
	{
	
	int x, y;
	fstream size_file;
		
	size_file.open("size.txt", ios::in);
	
	if(size_file.good()){
	
		size_file >> x;
		size_file >> y;
	
			line=x;
			column=y;

	
		}
		else {
			return 1;
		
		}
		
		size_file.close();
		return 0;
	}
	
	
	//////////////////////////////////////////////////////////////////
	
	
	
	
	
int Tablica::file_open()
{
	string check;
	string buforstring;
	float bufor;
	
	fstream file_check;
	file_check.open("checking.txt", ios::in);

	if(file_check.good()){
	
		for(int i=0; i<column; i++){
	
		file_check >> types[i];
		}
	
	}
	
	file_check.close();
	
	
	
	

	
		fstream file;
		file.open("savefile.txt", ios::in);

	
		if(file.good()){
	
			for(int i=0; i< line; i++){
				for(int j=0; j< column; j++){
	
					if(types[j]=="FLOAT"){
	
					file >> bufor;
					cellArr[i][j].floatFunction(bufor);
					}
					else{
						
					file >> buforstring;
					cellArr[i][j].stringFunction(buforstring);
						
						
					}
			} 
		}
	}
	else {
		return 1;
	}
	
	file.close();
	return 0;
	
		
		
	}
	
	
	
		//////////////////////////////////////////////////////////////////
	
	
	
	
	
	int Tablica::size_close()
	{
	
		fstream size_file_close;
		

			
		size_file_close.open("size.txt", ios::out | ios::trunc);
	
		if(size_file_close.good()){
	
		
		size_file_close << line;
		size_file_close << " ";
		size_file_close << column;
		
	
	
		}
		else {
			return 1;
		}
		
		size_file_close.close();
		return 0;
	}
	
	
	
		//////////////////////////////////////////////////////////////////
	
	
	
	
	
	int Tablica::file_close()
	{
	
		fstream file_close;
		fstream file_check;
			
		file_close.open("savefile.txt", ios::out | ios::trunc);
		file_check.open("checking.txt", ios::out | ios:: trunc);
		
		
		if(file_close.good() && file_check.good()){
	
			for(int i=0; i< line; i++){
				for(int j=0; j< column; j++){
			
			if(types[j]=="FLOAT"){
			
					file_close << cellArr[i][j].floatOut();
					file_close << " ";
			}
			else{
						
					file_close << cellArr[i][j].stringOut();
					file_close << " ";
	
				}
							
			
			}
			}
			
			for(int i=0; i < column; i++){
			
			file_check << types[i];
			file_check << " ";
			
			}
			
		}
		else {
			return 1;
		}
		
		file_close.close();
		return 0;
	}
