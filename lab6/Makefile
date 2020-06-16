all: program

program: main.o menu.o Array_class.o Table_view.o 
	g++ main.o menu.o Array_class.o Table_view.o -o program
main.o: menu.cpp
	g++ -c main.cpp
Array_class.o: Array_class.cpp
	g++ -c Array_class.cpp
Table_view.o: Table_view.cpp
	g++ -c Table_view.cpp
menu.o: menu.cpp
	g++ -c menu.cpp
clean:
	rm -f *.o program
