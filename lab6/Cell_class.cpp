#include "classCell.hpp"
	#include "classTablica.hpp"
	#include "menu.hpp"	
	
	
	
	void Cell::floatFunction (float val){ 
			
			floatvalue=val;
			which=1;
			
		};
		
		
		
		
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
