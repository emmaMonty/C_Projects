/*******************************************************************************
Emma Montgomery				

Summary:A program the sloves the quadratic from reading a file and
the output is a separte file

Input:text file
Output:text file

Compile: g++ quardratic.cpp -o quardratic.exe
**********************************************************************************
Psuedocode
Begin
	if argc < 2
		print user error
	if argc > 3
		print user error
	ifstream input
	ofstream output
	open input 
	open output
	if !input is open
		print can't open
	if argc == 2
	while loop ! feof
		input>> a>>b >>c
		discriminant = (b * b) - (4*a*c)
		if discriminant >0
			r1 = (-b +sqrt(discriminant)/(2*a))
			r2 = (-b - sqrt(discriminant)/(2*a))
			cout<<a <<b << c << r1<<r2
		else
			cout<<a << b <<c <<complex
	else
		if !output is open
			print can't open 
		while loop ! feof
			input>> a>>b >>c
			discriminant = (b * b) - (4*a*c)
			if discriminant >0
				r1 = (-b +sqrt(discriminant)/(2*a))
				r2 = (-b - sqrt(discriminant)/(2*a))
				output<<a <<b << c << r1<<r2
			else
				output<<a << b <<c <<complex
	close input
	close output
End
******************************************************************************************/
#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>
using namespace std;

int main (int argc, char* argv[]){ //Begin
	
	double a, b,c,r1,r2,discriminant ;
	if (argc < 2){//if argc < 2
		cout<<"User error when entering command line arguments"<< endl;//print user error
		return 1;}
	else  if (argc > 3){ //if argc > 3
		cout<<"User error when entering command line arguments"<< endl;//print user error
		return 1;}
	ifstream input; //ifstream input
	ofstream output; //ofstream output
	input.open(argv[1]); //open input
	output.open(argv[2]); //open output
	if (!input.is_open()){ //if !input is open
		cout<< "Unable to open argv[1]";//print can't open
		return 1;
	}
	if(argc ==2){ //if argc == 2
		output<<fixed;
		output.precision(4);
		while (!input.eof()) //while loop ! feof
	{
		input>> a >> b >> c;//input>> a>>b >>c
		//discriminant = (b * b) - (4*a*c)
		discriminant = (b * b) - (4*a*c);
		if (discriminant >= 0){//if discriminant >= 0
		//r1 = (-b +sqrt(discriminant)/(2*a))
			r1 = (-b +sqrt(discriminant))/(2*a);
			//r2 = (-b - sqrt(discriminant)/(2*a)
			r2 = (-b -sqrt(discriminant))/(2*a);
			//cout<<a <<b << c << r1<<r2
			cout<<a<<"\t"<<b<<"\t"<<c<<"\t";
			cout<<setprecision(4)<<fixed<<r1<<"\t"<<r2<<setprecision(0)<<endl;
		}
		else{//cout<<a << b <<c <<complex
			cout<<setprecision(0)<<a<<"\t"<<b<<"\t"<<c<<"\t"<<"complex"<<endl;
		}
	}
	}
	else{
		if(!output.is_open()){//if !output is open
			cout<< "Unable to open argv[2]";//print can't open 
			return 1;
		}
		while (!input.eof())//while loop ! feof
		{
			input>> a >> b >> c;//input>> a>>b >>c
			//discriminant = (b * b) - (4*a*c)
			discriminant = (b * b) - (4*a*c);
			if (discriminant >= 0){//if discriminant >= 0
			//r1 = (-b +sqrt(discriminant)/(2*a))
				r1 = (-b +sqrt(discriminant))/(2*a);
				//r2 = (-b - sqrt(discriminant)/(2*a))
				r2 = (-b - sqrt(discriminant))/(2*a);
				//output<<a <<b << c << r1<<r2
				output<<a<<"\t"<<b<<"\t"<<c<<"\t";
				output<<setprecision(4)<<fixed;
				output<<r1<<"\t"<<r2<<setprecision(0)<<endl;
			}
			else{//output<<a << b <<c <<complex
				output<<setprecision(0)<<a<<"\t"<<b<<"\t"<<c<<"\t";
				output<<"complex"<<endl;
			}
		}
	}
	input.close(); //close input
	output.close();//close output
	return 0; //End
	}
			