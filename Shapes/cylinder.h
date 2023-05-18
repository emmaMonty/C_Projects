#ifndef CYLINDER_H
#define CYLINDER_H
#include "circle.h"
class Cylinder : public Circle{
	protected:
	double  height;
	double volume;
	public:
	Cylinder(int a, int b, double c, double d);
	friend ostream& operator<<(ostream& t, const Cylinder& param);
};
#endif