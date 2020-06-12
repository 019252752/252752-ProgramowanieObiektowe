#include "Cell_class.h"
#include "Array_class.h"
#include "menu.h"

void Tablica::wyswietlanie(){
			
	int x, y;
	interface_wysw(2);
	cin >> x;
				
	while (x<0 || x>line){
		interface_wysw(3);
		cin >> x;
	}
	interface_wysw(1);
	cin >> y;
	while (y<0 || y>column){
		interface_wysw(3);
		cin >> y;
	}
	if(types[y]=="FLOAT"){
		cout << cellArr[x][y].floatOut();
	}
	else{		
		cout << cellArr[x][y].stringOut();
	}
}
