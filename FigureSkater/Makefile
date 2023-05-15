main.exe: main.o skater.o list.o
	g++ -o main.exe main.o skater.o list.o

main.o: skater.h list.h
	g++ -c main.cpp

skater.o: skater.cpp skater.h
	g++ -c skater.cpp

list.o: list.cpp list.h
	g++ -c list.cpp