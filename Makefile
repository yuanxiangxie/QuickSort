all: main
main: main.o ksort.o
	g++ -o main main.o ksort.o
main.o: main.cpp main.h
	g++ -c main.cpp 
ksort.o: ksort.cpp ksort.h
	g++ -c ksort.cpp
clean:
	rm -rf main main.o ksort.o

