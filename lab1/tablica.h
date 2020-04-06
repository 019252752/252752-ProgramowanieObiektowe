#ifndef tablica_h
#define tablica_h

 #include <iostream>
  #include <vector>

using namespace std;

  struct tab
{
	int a;
	int b;
}Tab;

class Table
{
	public:
	static void changeSize(vector<vector<int>> table, int new_width, int new_height);
	static void changeData(vector<vector<int>> table, int aPos, int bPos, int new_data);
	static void display(vector<vector<int>> table);
};

   void Table::display(vector<vector<int>> table)
{
	for(int i = 0; i<table.size(); i++)
	{
		for(int j = 0; j<table[i].size(); j++)
		{
			cout << table[i][j];
			cout << " ";
		}
		cout << endl;
	}

}

   void Table::changeData(vector<vector<int>> table, int aPos , int bPos, int new_data)
{
	if (table.size() > 0)
	{
		if(bPos>table.size() || aPos > table.size())
		{
			cout << "Niepoprawna wartosc" << endl;
		} else{
			table.at(bPos).at(aPos) = new_data;
		}
	}
}

  void Table::changeSize(vector<vector<int>> table, int new_width, int new_height)
{
	table.resize(new_height);

	for(int i =0; i<table.size(); i++)
	{
		table[i].resize(new_width);
	}
}
#endif
