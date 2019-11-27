# -*- MakeFile -*-


CC=gcc
FLAGS = -Wall -g


all: myBank main.o myBank.o

main.o: main.c myBank.h math.h
	$(CC) $(FLAGS) -c main.c

myBank.o: myBank.c myBank.h math.h
	$(CC) $(FLAGS) -c myBank.c

myBank: main.o myBank.o
	$(CC) $(FLAGS) myBank.o main.o -o myBank

.PHONY: clean all

clean:
	rm -f *.o myBank
