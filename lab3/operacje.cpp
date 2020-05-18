#include "main.hpp"
#include "operations.hpp"
using namespace std;


void addition_line (Tablica & tab)
{
	int nr_line;
	int sum=0;
	int control=1;
	
	cout << endl << "W tablicy znajduje sie " << tab.line << " wierszy.";
	cout << endl << "Ktory wiersz chcesz zsumowac?";
	cout << endl << "Nr wiersza: ";
	cin >> nr_line;
	
	while(control!=0)
	{	
		if(nr_line < 0 || nr_line > tab.line)
		{
			cout <<endl <<" Nie ma takiego wiersza, wprowadz poprawny numer: ";
			cin >> nr_line;
		}
		else
		{
			control=0;
		}
	}

	
	
	for(int i=0; i< tab.column; i++)
	{
		sum+= tab.tablica_str[nr_line][i];
	}
	
	cout << endl <<"Suma elementow tego wiersza wynosi: " << sum;

}


/////////////////////////////////////////////////////////////////////////////////////////



void addition_column (Tablica & tab)
{
	int nr_column;
	int sum=0;
	int control=1;
	
	cout << endl << "W tablicy znajduje sie " << tab.column << " kolumn.";
	cout << endl << "Ktora kolumne chcesz zsumowac?";
	cout << endl << "Nr kolumny: ";
	cin >> nr_column;
	
	while(control!=0)
	{	
		if(nr_column < 0 || nr_column > tab.column)
		{
			cout <<endl <<"Nie ma takiej kolumny, wprowadz poprawny numer: ";
			cin >> nr_column;
		}
		else
		{
			control=0;
		}
	}
	
	for(int i=0; i< tab.line; i++)
	{
		sum+= tab.tablica_str[i][nr_column];
	}
	
	cout << endl <<"Suma elementow tej kolumny wynosi: " << sum;

}


///////////////////////////////////////////////////////////////////////////////////////////////

void minimum (Tablica & tab)
{
	
	int min=tab.tablica_str[0][0];
	int min_line;
	int min_column;
	
	for(int i=0; i< tab.line; i++)
	{
		for(int j=0; j< tab.column; j++)
		{
			if(min >= tab.tablica_str[i][j])
			{
				min=tab.tablica_str[i][j];
				
				min_line=i;
				min_column=j;
			}
			
			
		}
	}
	
	
	cout <<endl << "Najmniejszy element to: " << min << ". Znajduje sie w: " << min_line << "x" << min_column;
			
			
}	
		
//////////////////////////////////////////////////////////////////////////////////////////////////////		
	
void maximum (Tablica & tab)
{
	
	int max=tab.tablica_str[0][0];
	int max_line;
	int max_column;
	
	for(int i=0; i< tab.line; i++)
	{
		for(int j=0; j < tab.column; j++)
		{
			if(max <= tab.tablica_str[i][j])
			{
				max=tab.tablica_str[i][j];
				
				max_line=i;
				max_column=j;
			}
			
			
			
		}
	}
	
	
	cout <<endl << "Najwiekszy element to: " << max << ". Znajduje sie w: " << max_line << "x" << max_column;
			
			
}	
	
//////////////////////////////////////////////////////////////////////////////////////////////////////
	
void average (Tablica & tab)
{
	
	float sum=0;
	
	for(int i=0; i< tab.line; i++)
	{
		for(int j=0; j < tab.column; j++)
		{
			sum+=tab.tablica_str[i][j];
			
		}
	}
	
	cout << "Srednia wszystkich elementow wynosi: " << sum/(tab.line+tab.column);
	
}
