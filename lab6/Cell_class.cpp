#include "Cell_class.h"
#include "Array_class.h"
#include "menu.h"	

void Cell::floatFunction (float val){ 
			
	floatvalue=val;
	which=1;	
}
		
void Cell::stringFunction (string val){ 
			
	stringvalue=val;
	which=2;	
}
		
float Cell::floatOut(){
	return floatvalue;
}
		
string Cell::stringOut(){
	return stringvalue;
}
