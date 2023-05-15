Main.exe: Main.o Sudoku.o
	g++ -o Main.exe Main.o Sudoku.o

Main.o: Sudoku.h
	g++ -c Main.cpp

Sudoku.o: Sudoku.cpp Sudoku.h
	g++ -c Sudoku.cpp