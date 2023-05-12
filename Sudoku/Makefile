Main.exe: Main.o Sudoku.o
	gcc -o Main.exe Main.o Sudoku.o

Main.o: Sudoku.h
	gcc -c Main.c

Sudoku.o: Sudoku.c Sudoku.h
	gcc -c Sudoku.c