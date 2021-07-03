TARGET = lista
DEPS = interfaz.o main.o

lista: interfaz.o main.o
	g++ $< -o lista $(LISTA)

interfaz.o: interfaz.cpp
	g++ -c interfaz.cpp

main.o: main.cpp
	g++ -c main.cpp

