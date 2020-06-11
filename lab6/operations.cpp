#include "classCell.hpp"
#include "classTablica.hpp"
#include "menu.hpp"

int Tablica::addition_line ()
{
	int nr_line;
	int sum=0;
	int control=1;
	
	
	for(int i=0; i < column; i++){
		if(types[i]=="STRING"){
			
			return 0;
		}
	}
	
	interface_add(1);
	cin >> nr_line;
	
	while(control!=0)
	{	
		if(nr_line < 0 || nr_line > line)
		{
			interface_add(2);
			cin >> nr_line;
		}
		else
		{
			control=0;
		}
	}

	
	
	for(int i=0; i< column; i++)
	{
		sum+= cellArr[nr_line][i].floatOut();
	}
	
	interface_add(3);
	cout << sum;

	return 1;

}


/////////////////////////////////////////////////////////////////////////////////////////



void Tablica::addition_column ()
{
	int nr_column;
	int sum=0;
	int control=1;
	
	interface_add(4);
	cin >> nr_column;
	
	while(control!=0)
	{	
		if(nr_column < 0 || nr_column > column || types[nr_column]=="STRING")
		{
			interface_add(2);
			cin >> nr_column;
		}
		else
		{
			control=0;
		}
	}
	
	for(int i=0; i< line; i++)
	{
		sum+= cellArr[i][nr_column].floatOut();
	}
	
	interface_add(3);
	cout << sum;



}


///////////////////////////////////////////////////////////////////////////////////////////////

int Tablica::minimum ()
{	
	int x;
	int min;
	interface_min(1);
	
	cin >> x;
	
	if(x==1)
	{
		
		interface_min(3);
		cin >> x; 
		
		if(x<0 || x > line){

		return 0;
		}

		for(int i=0; i <column; i++){
			if(types[i]=="STRING"){
				return 0;
			}
		}
			
		min=cellArr[x][0].floatOut();
	
	
		for(int j=0; j< column; j++)
		{
			if(min >= cellArr[x][j].floatOut())
			{
				min=cellArr[x][j].floatOut();
			}
		}
	
	}
	else
	{
		
		interface_min(3);
		cin >> x;
		
		if(x<0 || x> column || types[x] =="STRING"){
			return 0;
		}
		
		
		min=cellArr[0][x].floatOut();
		
		for(int j=0; j< line; j++)
		{
			if(min >= cellArr[j][x].floatOut())
			{
				min=cellArr[j][x].floatOut();
			}
		}
		
	}
	
	interface_min(2);
	cout << min;
			
	return 1;
			
}	
		
//////////////////////////////////////////////////////////////////////////////////////////////////////		
	
int Tablica::maximum ()
	{
		int x;
		int max;
		interface_max(1);
		cin >> x;
		
		if(x==1)
		{
			cin >> x;
			
			if(x<0 || x > line){

		return 0;
		}

		for(int i=0; i <column; i++){
			if(types[i]=="STRING"){
				return 0;
			}
		}
			
			
		max=cellArr[x][0].floatOut();

		for(int j=0; j < column; j++)
		{
			if(max <= cellArr[x][j].floatOut())
			{
				max=cellArr[x][j].floatOut();
				
			}
			
		}
	
		}
		else
		{
			cin >> x;
			
			if(x<0 || x> column || types[x] =="STRING"){
			return 0;
		}
			
			
		max=cellArr[0][x].floatOut();

		for(int j=0; j < line; j++)
		{
			if(max <= cellArr[j][x].floatOut())
			{
				max=cellArr[j][x].floatOut();
				
			}
			
		}
		}
	interface_max(2);
	cout  << max;
			
			return 1;
}	
	
//////////////////////////////////////////////////////////////////////////////////////////////////////
	
int Tablica::average ()
{
	int x;
	float sum=0;
	
	interface_av(1);
	cin >> x;
	
	
		interface_av(3);
		cin >> x;
		
		if(x==1)
		{
			cin >> x;
			
			if(x<0 || x > line){

		return 0;
		}

		for(int i=0; i <column; i++){
			if(types[i]=="STRING"){
				return 0;
			}
		}
		
		
		
		for(int j=0; j < column; j++)
		{
			sum+=cellArr[x][j].floatOut();
			
		}
	
	}
	else{
		
		interface_av(3);
		cin >> x;
		
		if(x<0 || x> column || types[x] =="STRING"){
			return 0;
		}
		
		
		for(int j=0; j < line; j++)
		{
			sum+=cellArr[j][x].floatOut();
			
		}
		
		
	}
	interface_av(2);
	cout << sum/(line*column);
	
	return 1;



}
