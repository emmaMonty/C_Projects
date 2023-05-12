#ifndef SUDOKU_H
#define SUDOKU_H

class Sudoku {
private:
	int Num = 0;
	int grid[9][9] = { {0} };
	int fixed[9][9] = { {0} };
	int Row= 0;
	int Column =0;
	int x;
	int y;
public:
	Sudoku(int n);
	int solve();
	int checkBoxes();
	void printGrid();
	bool check();
	int firstSquareInPlay();
	int nextSquareInPlay();
	int PrevSquareInPlay();
	void populate(int n);

};
#endif