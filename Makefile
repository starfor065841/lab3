main: main_lab3.o
	g++ -o main main_lab3.o
main_lab3.o: main_lab3.cpp
	g++ -c main_lab3.cpp
