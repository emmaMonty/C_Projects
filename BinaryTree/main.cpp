/*******************************************************************************
Emma Montgomery				A02321679

Summary: A program that reads a natural number from a file and outputs
the log number to a file
Function:main
input:argc:number of command aguments
	  agrv[1]: file for input
	  agrv[2]: file for output
output:agrv[2]: the output file
Psuedocode
*********************************************************************************
Begin
	if (argc != 3)
		print user error
		return
	open input
	open output
	output=fopen(argv[2], w)
	if  input not open
		print can't open
		return
	if output not open
		print can't open
		return
	Btree b
	while loop
		input>>oper>>number
		if oper == 'a'
			b.add(b.root,number)
		else if oper == 'd'
			b.root=b.remove(b.root,number)
		else
			print invalid input
	b.printTree(b.root,output)
	input.close()
	output.close()
End
*******************************************************************************/
#include <fstream>
#include <iostream>
#include "BinaryTree.h"
using namespace std;
int main(int argc, char *argv[]){
	int number;
	char oper;
	ifstream input;
	ofstream output;
	if(argc != 3){//if (argc != 3)
		//print user error
		cout<<"user error when entering command line arguments\n"; 
		return 0;//return
	}
	input.open(argv[1]);//open input
	output.open(argv[2]);//open output
	if (!input.is_open ()) { //if !open
		cout << "Could not open the file"; //print can't open file
		return 0;//return
	}
	if (!output.is_open ()) { //if !open
		cout << "Could not open the file"; //print can't open file
		return 0;//return
	}
	BTree b;//Btree b
	while(!input.eof()){//while loop
		input>>oper>>number;//input>>oper>>number
		if(oper == 'a'){//if oper == 'a'
			b.add(b.root,number);//b.add(b.root,number)
		}
		else if(oper == 'd'){//else if oper == 'd'
			//b.root=b.remove(b.root,number)
			b.root=b.remove(b.root,number);
		}
		else{//else
			cout<<"invalid input"<<endl;//print invalid input
		}
	}
	b.printTree(b.root,output);//b.printTree(b.root,output)
	input.close();//input.close()
	output.close();//output.close()
}