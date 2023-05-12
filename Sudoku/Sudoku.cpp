#include "Sudoku.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
/*******************************************************************************
Function:Sudoku

input:n
output:none

Psuedocode
********************************************************************************
Begin
	populate
End
*******************************************************************************/
Sudoku::Sudoku(int n) {
	populate(n);//populate
}
/*******************************************************************************
Function:printGrid

input:none
output:none

Psuedocode
********************************************************************************
Begin
	for loop for i
		for loop for j
			if grid = 0
				print *
			else
				print grid
			if i < 9
				print spaces
			if j == 2
				cout the |
			else if j == 5
				cout the |
		if i == 2
			cout the dashes
		else if i == 5
			cout the dashes
End
*******************************************************************************/
void Sudoku::printGrid() {
	//for loop for i 
	for (int i = 0; i < 9; i++) {
		//for loop for j
		for (int j = 0; j < 9; j++) {
			//if grid = 0
			if (grid[i][j] == 0) {
				//print *
				cout << '*';
			}
			else {//else
				//print grid
				cout << grid[i][j];
			}
			if (i < 9) {//if i < 9
				//print spaces
				cout << " ";
			}
			if (j == 2) {//if j == 2
				cout << "| "; //cout the |
			}
			else if (j == 5) {//else if j == 2
				cout << "| ";//cout the |
			}
		}
		if (i == 2) {//if i == 2 
			//cout the dahes
			cout << endl;
			cout << "------" << "+" << "-------" << "+";
			cout << "------";
		}
		else if (i == 5) {//else if i == 5
			//cout the dashes
			cout << endl;
			cout << "------" << "+" << "-------" << "+";
			cout << "------";
		}
		cout << endl;
	}
}
/*******************************************************************************
Function:populate

input:n
output:none

Psuedocode
********************************************************************************
Begin
	srand ((unsigned)time(NULL))
	for loop
		x = rand() %9
		y = rand () %9
		rNum = rand() % 9+1
		if grid[x][y] == 0 && check()
			grid[x][y] = Num
			fixed[x][y] = 1
			t++
End
*******************************************************************************/
void Sudoku::populate(int n) {
	srand((unsigned)time(NULL)); //srand ((unsigned)time(NULL))
	for (int t = 0; t < n;) { //for loop
		x = rand() % 9; //x = rand() %9
		y = rand() % 9;//y = rand () %9
		Num = rand() % 9 + 1;//Num = rand() % 9+1
		if (grid[x][y] == 0 && check()) { //if grid[x][y] == 0 && check()
			grid[x][y] = Num;//grid[x][y] = Num
			fixed[x][y] = 1;//fixed[x][y] = 1
			t++;//t++
		}
	}
}
/*******************************************************************************
Function:check

input:none
output:true or false

Psuedocode
********************************************************************************
Begin
	bool change = true;
	if Num> 9
		change = false
	for (int i = 0; i < 9; i++)
		if grid[i][x] == Num
			change = false
		if grid[x][j] == Num
			change = false
	if checkBoxes()
		change = false
	if grid[x][y] != 0
		change = false
	if Num == 0
		change = false
	if change == true
		grid[x][y] = Num
		return true
	else
		return false
End
*******************************************************************************/
bool Sudoku::check() {
	bool change = true;
	int t = Num;
	int i, j;
	if (Num > 9) {
		change = false; //change = false
	}
	for (i = 0; i < 9; i++) {//for (int i = 0; i < 9; i++)
		if (grid[i][y] == Num) { //if grid[i][x] == Num
			change = false;//change = false
		}
	}
	for (j = 0; j < 9; j++) { //for (int j = 0; j < 9; j++)
		if (grid[x][j] == Num) { //if grid[x][j] == Num
			change = false;//change = false
		}
	}
	if (checkBoxes()) {//if checkBoxes()
		change = false; //change = false
	}
	if (fixed[x][y] != 0) {//if grid[x][y] != 0
		change = false; //change = false
	}
	if (Num == 0) { //if Num == 0
		change = false; //change = false
	}
	if (change == true) { //if change == true
		grid[x][y] = Num; //grid[x][y] = Num
		return true; //return true
	}
	else {//else
		return false; //return false
	}

}
/*******************************************************************************
Function:check

input:none
output:true or false

Psuedocode
********************************************************************************
Begin
	check Boxes
	if (x < 3 && y < 3) 
		for (i = 0; i < 3; i++) 
			for (j = 0; j < 3; j++) 
				if (grid[i][j] == Num) 
					return 1
	repeat nine time just changing the for loop and if statement
	return 0
End
*******************************************************************************/
int Sudoku::checkBoxes() {
	//Check Boxes
	int i, j;
	if (x < 3 && y < 3) { //if (x < 3 && y < 3) 
		for (i = 0; i < 3; i++) {//for (i = 0; i < 3; i++)
			for (j = 0; j < 3; j++) {// for (j = 0; j < 3; j++)
				if (grid[i][j] == Num) {//if (grid[i][j] == Num) 
					return 1; //return 1
				}
			}
		}
	}
//repeat nine time just changing the for loop and if statement
	if (x < 3 && (y > 2 && y < 6)) {
		for (i = 0; i < 3; i++) {
			for (j = 3; j < 6; j++) {
				if (grid[i][j] == Num) {
					return 1;
				}
			}
		}
	}
	if (x < 3 && y >5) {
		for (i = 0; i < 3; i++) {
			for (j = 6; j < 9; j++) {
				if (grid[i][j] == Num) {
					return 1;
				}
			}
		}
	}
	//second grids
	if ((x > 2 && x < 6) && y < 3) {
		for (i = 3; i < 6; i++) {
			for (j = 0; j < 3; j++) {
				if (grid[i][j] == Num) {
					return 1;
				}
			}
		}
	}
	if ((x > 2 && x < 6) && (y > 2 && y < 6)) {
		for (i = 3; i < 6; i++) {
			for (j = 3; j < 5; j++) {
				if (grid[i][j] == Num) {
					return 1;
				}
			}
		}
	}
	if ((x > 2 && x < 6) && y > 5) {
		for (i = 3; i < 6; i++) {
			for (j = 6; j < 9; j++) {
				if (grid[i][j] == Num) {
					return 1;
				}
			}
		}
	}
	//third row
	if (x > 5 && y < 3) {
		for (i = 6; i < 9; i++) {
			for (j = 0; j < 3; j++) {
				if (grid[i][j] == Num) {
					return 1;
				}
			}
		}
	}
	if (x > 5 && (y > 2 && y < 6)) {
		for (i = 6; i < 9; i++) {
			for (j = 3; j < 6; j++) {
				if (grid[i][j] == Num) {
					return 1;
				}
			}
		}
	}
	if (x > 5 && y > 5) {
		for (i = 6; i < 9; i++) {
			for (j = 6; j < 9; j++) {
				if (grid[i][j] == Num) {
					return 1;
				}
			}
		}
	}
	return 0; //return 0
}
/*******************************************************************************
Function:solve

input:none
output:1 or 0

Psuedocode
********************************************************************************
Begin
	Num = 1
	bool checkSuccess = 0
	firstSquareInPlay()
	while loop
		checkSuccess = check()
		grid[x][y] = Num
		if checkSuccess
			Num =1
			if !next square in play
				return 1
		else
			Num += 1
			if Num >9
				place 0 at grid [x,y]
				if !prev square in play
					return 0
			else
				Num = grid[x,y] +1
End
*******************************************************************************/
int Sudoku::solve() {
	Num = 1;//Num = 1
	bool checkSuccess = 0;//bool checkSuccess = 0
	firstSquareInPlay();//firstSquareInPlay()
	while (1) { //while loop
		checkSuccess = check(); //checkSuccess = check()
		grid[x][y] = Num;//grid[x][y] = Num
		if (checkSuccess) { //if checkSuccess
			Num = 1; //Num =1
			if (!nextSquareInPlay()) {//if !next square in play
				return 1; //return 1
			}
		}
		else { //else
			Num += 1;//Num += 1
			if (Num > 9) {//if Num >9
				grid[x][y] = 0;//place 0 at grid [x,y]
				if (!PrevSquareInPlay()) {//if !prev square in play
					return 0;//return 0
				}
				else {//else
					Num = grid[x][y] + 1;//Num = grid[x,y] +1
				}
			}
		}
	}
}
/*******************************************************************************
5Function:firstSquareInPLay

input:none
output:true

Psuedocode
********************************************************************************
Begin
	for loop for x
		for loop for y
			if fixed = 0
				return 1
	return 0
End
*******************************************************************************/
int Sudoku::firstSquareInPlay() {
	for (x = 0; x < 9; x++) { //for loop for x
		for (y = 0; y < 9; y++) {//for loop for y
			if (fixed[x][y] == 0) {//if fixed = 0
				return 1; //return 1
			}
		}
	}
	return 0;//return 0
}
/*******************************************************************************
Function:nextSquareInPlay()

input:none
output:true

Psuedocode
********************************************************************************
Begin
	y++
	for loop for x
		for loop for y
			if fixed[x][y] == 0
				return true
		y = 0
	return 0
End
*******************************************************************************/
int Sudoku::nextSquareInPlay() {
	y++;//y++
	for (; x < 9; x++) { //for loop for x
		for (; y < 9; y++) {//for loop for y
			if (fixed[x][y] == 0) {//if fixed[x][y] == 0
				return 1;//if fixed = 0
			}
		}
		y = 0;//y = 0
	}
	return 0; //return 0
}
/*******************************************************************************
Function::PrevSquareInPlay()

input:none
output:true

Psuedocode
********************************************************************************
Begin
	y--
	for loop for x
		for loop for y
			if fixed == 0
				return 1
		y = 8
	return 0
End
*******************************************************************************/
int Sudoku::PrevSquareInPlay() {
	y--;
	for (; x >= 0; x--) { //for loop for x
		for (; y >= 0; y--) {//for loop for y
			if (fixed[x][y] == 0) { //if fixed == 0
				return 1;//return 1
			}
		}
		y = 8; //y = 8
	}
	return 0;//return 0
}
