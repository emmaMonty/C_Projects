#include "circle.h"
using namespace std;
/*******************************************************************************
Function:Circle
intput: a, b,, inherits from Point
output none
Psuedocode
Begin
	radius = c
	area = (3.14159 * radius *radius)
End
*******************************************************************************/
Circle :: Circle(int a, int b, double c) : Point (a, b){
	radius = c;//radius = c
	area = (3.14159*radius*radius);//area = (3.14159 * radius *radius)
}
/*******************************************************************************
Function:ostream& operator<<
intput: ostream, t, Circle, param
output t
Psuedocode
Begin
	t << "Circle with center = ("<<param.x<<", "<<param.y<<"); Radius = "
	t<<param.radius<<"; Area = "<<param.area
	return t
End
*******************************************************************************/
ostream& operator<<(ostream& t, const Circle& param){
	//t << "Circle with center = ("<<param.x<<", "<<param.y<<"); Radius = "
	t << "Circle with center = ("<<param.x<<", "<<param.y<<"); Radius = ";
	//t<<param.radius<<"; Area = "<<param.area
	t<<param.radius<<"; Area = "<<param.area; 
	return t;//return t

}