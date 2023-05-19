#include "circle.h"
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
Function:printShape
intput: ostream, t
output:none
Psuedocode
Begin
	t << "Circle with center = ("<<x<<", "<<y<<"); Radius = "
	t<<radius<<"; Area = "<<area
End
*******************************************************************************/
void Circle:: printShape(ostream& t){
	//t << "Circle with center = ("<<x<<", "<<y<<"); Radius = "
	t << "Circle with center = ("<<x<<", "<<y<<"); Radius = ";
	//t<<radius<<"; Area = "<<area
	t<<radius<<"; Area = "<<area; 

}