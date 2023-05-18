#include "cylinder.h"
using namespace std;
/*******************************************************************************
Function:Cylinder
intput: a, b,c,d, inherits from Circle
output none
Psuedocode
Begin
	height = d
	voulume = area * height
End
*******************************************************************************/
Cylinder::Cylinder(int a, int b, double c, double d):Circle(a,b,c){
	height = d;//height = d
	volume = area * height;//voulume = area * height
}
/*******************************************************************************
Function:ostream& operator<<
intput: ostream, t, CYlinder, param
output t
Psuedocode
Begin
	t << "Cylinder with center = ("<<param.x<<", "<<param.y<<"); Radius = "
	t<<param.radius<<" Height = "<<param.height<<"; Volume = "<<param.volume
	return t
End
*******************************************************************************/
ostream& operator<<(ostream& t, const Cylinder& param) {
	//t << "Cylinder with center = ("<<param.x<<", "<<param.y<<"); Radius = "
	t << "Cylinder with center = ("<<param.x<<", "<<param.y<<"); Radius = ";
	//t<<param.radius<<" Height = "<<param.height<<"; Volume = "<<param.volume
	t<<param.radius<<" Height = "<<param.height<<"; Volume = "<<param.volume;
	return t;//return t
}