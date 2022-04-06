all : MY_SECMALLOC EXECUTION

# CC= gcc
# CFLAGS= -Wall -c -std=c99 -pedantic -fstack-protector(-all ?)

# TYPE OF ARGUMENTS
# product : source 
#	commande 

code.o : code.c code.h
	gcc -c -Wall code.c

# MAIN COMPILING FILE
main.o : main.c code.h
	gcc -c -Wall main.c

PROJET : code.o main.o
	gcc -o my_secmalloc code.o main.o

EXECUTION : 
	./my_secmalloc
