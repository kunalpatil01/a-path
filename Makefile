CC=g++
CFLAGS= -Wall -g

main: main.o graph.o 
		$(CC) -c main.cpp graph.cpp
		$(CC) -o main main.o graph.o 