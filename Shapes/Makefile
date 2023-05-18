main.exe: main.o circle.o cylinder.o point.o
	g++ -o main.exe main.o circle.o cylinder.o point.o

main.o: circle.o cylinder.o point.o
	g++ -c main.cpp

circle.o: circle.cpp circle.h
	g++ -c circle.cpp
	
cylinder.o: cylinder.cpp cylinder.h
	g++ -c cylinder.cpp
	
point.o: point.cpp point.h
	g++ -c point.cpp