#include "Cell_class.h"
#include "Array_class.h"
#include "menu.h"
	
int choice;

int loop=1;
int error=0;
int op;

Tablica arr;

int main(){
	
	error=arr.size_open();
	
	interface(error);
	
	arr.type_create();
	
	arr.tablica_powstanie();
	
	error=arr.file_open();
	
	interface(error);
	
	if(error!=1){
		while(loop!=0){
			choice=menu();
			switch(choice){
				case 1:
		
					arr.removing_table();
				
					arr.removing_type();

					arr.how();
				
					arr.type_create();
				
					arr.type_choose();

					arr.tablica_powstanie();
					break;
				case 2:
					
					arr.how();

					error=arr.tablica_rozmiar();
				
					interface(error);
				
					if(error==2){
						loop=0;
					}
					break;
				case 3:
			
					arr.aktualizowanie();
					break;
				case 4:

					arr.wyswietlanie();
					break;
				case 5:
			
					switch(menu_operations()){
						case 1:	
							op=arr.addition_line();
							operations_check(op);
							break;
						case 2:
							arr.addition_column ();
							break;
						case 3:
							op=arr.minimum ();
							operations_check(op);
							break;
						case 4:
							op=arr.maximum ();
							operations_check(op);
							break;
						case 5:
							op=arr.average ();
							operations_check(op);
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
	}
	error=0;
		
	error=arr.size_close();

	interface(error);

	error=arr.file_close();
		
	interface(error);

	arr.removing_table();

	return 0;
}
