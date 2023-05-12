/*******************************************************************************
Emma Montgomery				

Function main

input:none
output:none

Psuedocode
********************************************************************************
 Begin
	print welcome to sudoku slover
	ask user for # of squares wantes
	store input
	make object
	print grid
	if sloveable
		print sloved 
		call grid
	else
		print unsloveable
 End
*******************************************************************************/
#include "Sudoku.h"
#include <iostream>

using namespace std;

int main() {
	int num;
	//print welcome to sudoku slover
	cout << "Welcome to Sudoku Solver!" << endl;
	//ask user for # of squares wantes
	cout << "Enter the number squares to prepopulate:";
	cin >> num;//store input
	Sudoku s(num);//make object
	s.printGrid();//print grid
	if (s.solve()) {//if sloveable
		cout << "Solved !" << endl; //print sloved 
		s.printGrid();//call grid
	}
	else { //else
		//print unsloveable
		cout << "Sorry, unslovable" << endl;
	}
	return 0;
}