program: main.o menu.o Array_class.o Cell_class.o
	g++ -o program main.o menu.o Array_class.o Cell_class.o
main.o: main.cpp menu.h
	g++ -c main.cpp
menu.o: menu.cpp menu.h Array_class.h
	g++ -c menu.cpp
Array_class.o: Array_class.cpp Array_class.h Cell_class.h
	g++ -c Array_class.cpp
Cell_class.o: Cell_class.cpp Cell_class.h
	g++ -c Cell_class.cpp
clean:
	rm -f ex1
