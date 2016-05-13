all: main
main: main.o heapsort.o
	g++ -o main main.o heapsort.o
main.o: main.cpp main.h
	g++ -c main.cpp 
heapsort.o: heapsort.cpp heapsort.h
	g++ -c heapsort.cpp
clean:
	rm -rf main main.o heapsort.o

