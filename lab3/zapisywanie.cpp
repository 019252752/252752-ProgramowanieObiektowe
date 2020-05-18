#include "main.hpp"
#include "zapisywanie.hpp"


using namespace std;

	
	
	void size_open(Tablica & tab)
	{
	
	int x, y;
	
	fstream size_file;
	size_file.open("size.txt", ios::in);
	
	if(size_file.good()){
	
		size_file >> x;
		size_file >> y;
	
			tab.line=x;
			tab.column=y;

	
		}
		else {
			cout << "ERROR SIZE_OPEN";
		}
		
		size_file.close();
		
	}
	
	
	//////////////////////////////////////////////////////////////////
	
	
	
	
	
	void file_open(Tablica & tab)
	{
	
	float bufor;
	
	fstream file;
	file.open("savefile.txt", ios::in);

	
	if(file.good()){
	
		for(int i=0; i< tab.line; i++){
			for(int j=0; j< tab.column; j++){
	
				file >> bufor;
				tab.tablica_str[i][j]= bufor;
	
	
	
		} }
	}
	else {
		cout << "ERROR FILE_OPEN";
	}
	
	file.close();
	}
	
	
	
		//////////////////////////////////////////////////////////////////
	
	
	
	
	
	void size_close(Tablica & tab)
	{
	
		fstream size_file_close;
		size_file_close.open("size.txt", ios::out | ios::trunc);
	
	
		if(size_file_close.good()){
	
		
		size_file_close << tab.line;
		size_file_close << " ";
		size_file_close << tab.column;
		
	
	
		}
		else {
			cout << "ERROR SIZE_CLOSE";
		}
		
		size_file_close.close();
	}
	
	
	
		//////////////////////////////////////////////////////////////////
	
	
	
	
	
	void file_close(Tablica & tab)
	{
	
		fstream file_close;
		file_close.open("savefile.txt", ios::out | ios::trunc);
		
		if(file_close.good()){
	
			for(int i=0; i< tab.line; i++){
				for(int j=0; j< tab.column; j++){
			
					file_close << tab.tablica_str[i][j];
					file_close << " ";
	
	
	
				}
							
			
			}
		}
		else {
			cout << "ERROR FILE_CLOSE";
		}
		
		file_close.close();
	}
