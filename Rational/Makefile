main.exe: main.o Rational.o
	gcc -o main.exe Main.o Rational.o

main.o: Rational.h
	gcc -c main.cpp

Rational.o: Rational.cpp Rational.h
	gcc -c Rational.cpp