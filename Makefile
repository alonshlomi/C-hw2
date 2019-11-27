# -*- MakeFile -*-


CC=gcc
AR=ar
FLAGS = -Wall -g


all: myBank main.o myBank.o libmyBank.a

libmyBank.a: myBank.o
	$(AR) -rcs libmyBank.a myBank.o

main.o: main.c myBank.h 
	$(CC) $(FLAGS) -c main.c

myBank.o: myBank.c myBank.h
	$(CC) $(FLAGS) -c myBank.c

myBank: main.o myBank.o
	$(CC) $(FLAGS) myBank.o main.o -o myBank

.PHONY: clean all

clean:
	rm -f *.o *.a myBank
