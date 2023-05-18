#ifndef CIRCLE_H
#define CIRCLE_H
#include "point.h"
class Circle : public Point{
	protected:
	double radius;
	double area;
	public:
		Circle(int a, int b, double c);
		friend ostream& operator<<(ostream& t, const Circle& param);
};
#endif