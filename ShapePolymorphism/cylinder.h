#ifndef CYLINDER_H
#define CYLINDER_H
#include "circle.h"
class Cylinder : public Circle{
	protected:
	double  height;
	double volume;
	public:
	Cylinder(int a, int b, double c, double d);
	void printShape(ostream& t);
};
#endif