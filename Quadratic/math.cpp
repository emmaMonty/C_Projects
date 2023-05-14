/******************************************************************************
Function:math
input:
output:

*******************************************************************************
Psuedocode
Begin
	slove for the discriminant
	if discriminat > 0
		slove for r1 
		slove for r2
	else 
		print complex to file
End
**********************************************************************************/
#include <iostream>
#include <fstream>
#include <cmath>
#include "quadratic.h"
using namespace std;

void math(float a, float b, float c)
{
	double discriminant, r1, r2;
	discriminant = (b * b) - (4*a*c);
	if (discriminant > 0){
		r1 = (-b +sqrt(discriminant)/(2*a));
		r2 = (-b - sqrt(discriminant)/(2*a));
		
	}
	else{
		cout<<a << b << c << "complex";//print complex to file
	}
}