/*******************************************************************************
Emma Montgomery

Summary:This program does 4 different math on ration fractions

Input:
Output:
Function: main
Psuedocode
/*******************************************************************************
* Begin
*	x = 0;
*	Ask user for numerator
*	store numerator
*	Ask user for denominator
*	store denominator
*	call function
	call function
*	print the simplist form of fraction
*	while loop
*		print the options
* *		try 
*			if (input !=1 && input !=2 && input !=3 && input !=4 && input !=0) {
*				throw input
*		catch (int e) 
*		cout << e <<"not a vailed entry" << endl;
*		countine
*		if user enters 1
*			Ask user for numerator
*			store numerator
*			Ask user for denominator
*			store denominator
*			call function
*			print answer
*		else if user enters 2
*			Ask user for numerator
*			store n
*			Ask user for denominator
*			store d
*			call function
*			print answer
*		else if user enters 3
* 			Ask user for numerator
*			store numerator
*			Ask user for denominator
*			store denominator
*			call function
*			print answer
*		else if user enters 4
* 			Ask user for numerator
*			store numerator
*			Ask user for denominator
*			store denominator
*			call function
*			print answer
*		else if user enters 0
*			x ==1
* End
*****************************************************************************/
#include "Rational.h"
#include <iostream>
#include <cmath>

using namespace std;
int main()//Begin
{

	int numerator, denominator, x, input;
	int n, d;
	x = 0; //x = 0
	cout << "Enter numerator:";//Ask user for numerator
	cin >> numerator;//store numerator
	cout << "Enter denominator:";
	cin >> denominator; //store denominator
	//make object
	Rational r(numerator, denominator);
	numerator/= r.GCD(numerator, denominator); //call function
	denominator /= r.GCD(numerator, denominator);//callfunction
	cout << "this reduces to "<<numerator << "/" << denominator << endl;
	while (x == 0) { //while loop
		//print the options
		cout << "1. Add a rational" << endl;
		cout << "2. Subtract a rational" << endl;
		cout << "3. Multiply by a raional" << endl;
		cout << "4. Divide by a rational" << endl;
		cout << "0. Exit" << endl;
		cout << "Enter a selection: ";
		cin >> input;
		try { //if (input !=1 && input !=2 && input !=3 && input !=4 && input !=0)
			//if (input !=1 && input !=2 && input !=3 && input !=4 && input !=0)
			if (input !=1 && input !=2 && input !=3 && input !=4 && input !=0) {
				throw input; //throw input
			}
		}
		catch (int e) { //catch (int e)
			//cout << e <<"not a vailed entry" << endl;
			cout << e << " not a vailed entry" << endl;
			continue;//continue
		}
		if (input == 1) {//if user enters 1
			cout << "Enter numerator:";//Ask user for numerator
			cin >> n;//store numerator
			cout << "Enter denominator:";//Ask user for denominator
			cin >> d;//store denominator
			r.add(n, d); //call function
			//print answer
			cout << r.getNum() << "/" << r.getDemon() << endl;
		}

		else if (input == 2) {//else if user enters 0
			cout << "Enter numerator:";//Ask user for numerator
			cin >> n;//store numerator
			cout << "Enter denominator:";//Ask user for denominator
			cin >> d;//store denominator
			r.sub(n, d); //call function
			//print answer
			cout << r.getNum() << "/" << r.getDemon() << endl;
		}

		else if (input == 3) { //else if user enters 3
			cout << "Enter numerator:";//Ask user for numerator
			cin >> n;//store numerator
			cout << "Enter denominator:";//Ask user for denominator
			cin >> d; //store denominator
			r.mul(n, d);//call function
			//print answer
			cout << r.getNum() << "/" << r.getDemon() << endl;
		}

		else if (input == 4) { //else if user enters 4
			cout << "Enter numerator:";//Ask user for numerator
			cin >> n;//store numerator
			cout << "Enter denominator:";//Ask user for denominator
			cin >> d; //store denominator
			r.div(n, d);//call function
			//print answer
			cout << r.getNum() << "/" << r.getDemon() << endl;
		}

		else if (input == 0) {//else if user enters 0
			x = 1; //x ==1
		}
	}

	return 0;
}//End