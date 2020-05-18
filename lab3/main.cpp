#include "main.hpp"
#include "tablica.hpp"
#include "tablica_wysw.hpp"
#include "menu.hpp"
#include "zapisywanie.hpp"
#include "operations.hpp"

using namespace std;


int oldsize1, oldsize2, choice;

int loop=1;


Tablica arr;


int main() 
{
	////////
	size_open(arr);
	
	tablica_powstanie(arr);

	filling(arr);
	
	file_open(arr);
	
	//// interface



	while(loop!=0)
	{
		
		choice=menu();
		switch(choice) 
		{

			case 1:
		
				removing_table(arr);

				how(arr);

				tablica_powstanie(arr);

			break;
			
			case 2:
				
				oldsize1=arr.line;
				oldsize2=arr.column;
				
				how(arr);

				tablica_rozmiar(oldsize1, oldsize2, arr);
				
			case 3:
			
				aktualizowanie(arr);

			break;
			
			case 4:

				wyswietlanie(arr);

			break;
				
			case 5:
			
			switch(menu_operations())
			{
					case 1:	
						addition_line (arr);
					break;
					
					case 2:
						addition_column (arr);
					break;
					
					case 3:
						minimum (arr);
					break;
					
					case 4:
						maximum (arr);
					break;
					
					case 5:
						average (arr);
					break;
					
					default:
						
					break;
				}
				
			
			break;
			
			case 6:
				
				loop=0;
			
			break;
				
			default:
			break;
				
				
	
		}					
	}
	////

		size_close(arr);


		file_close(arr);

		removing_table(arr);

	return 0;
}
