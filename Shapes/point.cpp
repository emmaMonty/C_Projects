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
Function:ostream& operator<<
intput: ostream, t, Point, param
output t
Psuedocode
Begin
	t << "Point at ("<<param.x<<", "<<param.y<<")
	return t
End
*******************************************************************************/
ostream& operator<<(ostream& t, const Point& param){
	//t << "Point at ("<<param.x<<", "<<param.y<<")
	t << "Point at ("<<param.x<<", "<<param.y<<")"; 
	return t;//return t
}