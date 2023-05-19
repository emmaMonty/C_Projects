#include "point.h"
using namespace std;
/*******************************************************************************
Function:Point
intput: a, b
output none
Psuedocode
Begin
	x =a
	y =b
End
*******************************************************************************/
Point :: Point(int a, int b){
	x = a; //x =a
	y = b;//y =b
}
/*******************************************************************************
Function:printShape
intput: ostream, t
output:none
Psuedocode
Begin
	t << "Point at ("<<x<<", "<<y<<")
	return t
End
*******************************************************************************/
void Point::printShape(ostream& t){
	//t << "Point at ("<<x<<", "<<y<<")
	t << "Point at ("<<x<<", "<<y<<")"; 
}