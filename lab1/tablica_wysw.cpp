#include <iostream>
#include <stdlib.h>
#include <vector>
#include "tablica.h"
 
using namespace std;

 int main(){
	 vector<vector<int>> table{{1,2,3},
		                            {1,2,3},
					    {1,2,3}};
	 Table::changeData(table,0,0,100);
	 Table::display(table);
	 return 0;
}
