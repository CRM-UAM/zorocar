# Makefile para compilar zorocar
# Autor: Lázaro
CC=gcc
CFLAGS=-c -Wall

all: zorocar clean

zorocar: main.c comprobadores.o
	$(CC) -o zorocar main.c comprobadores.o

comprobadores.o: comprobadores.c comprobadores.h
	$(CC) -c comprobadores.c comprobadores.h
	
.POLO: clean
		
clean:
	rm -rf *.o
