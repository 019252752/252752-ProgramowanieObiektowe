output: main.o menu.o tablica_wysw.o tablica.o zapisywanie.o operations.o
		g++ main.o menu.o tablica_wysw.o tablica.o  zapisywanie.o operations.o -o output
		
main.o: main.cpp
	g++ -c main.cpp
	
menu.o: menu.cpp
	g++ -c menu.cpp
	
tablica_wysw.o: tablica_wysw.cpp
	g++ -c tablica_wysw.cpp
	
tablica.o: tablica.cpp
	g++ -c tablica.cpp
	
zapisywanie.o: zapisywanie.cpp
	g++ -c zapisywanie.cpp
	
operations.o: operations.cpp
	g++ -c operations.cpp
	
clean:
	rm *.o output
