
main.exe: main.o MyComplex.o
	g++ -o main.exe main.o MyComplex.o

main.o: MyComplex.h
	g++ -c main.cpp

MyComplex.o: MyComplex.cpp MyComplex.h
	g++ -c MyComplex.cpp