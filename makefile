FLAGS=-g -std=c++11 -pedantic -Wall -Werror -Wno-sign-compare -Wno-long-long -lm -O2
CC=g++

all: main clean

main: struct
	$(CC) $(FLAGS) -c main.cpp
	$(CC) $(FLAGS) -o VFSgenerator struct.o main.o 

struct: struct.cpp
	$(CC) $(FLAGS) -c struct.cpp

clean:
	rm -f *.o
	rm -f *.stackdump
