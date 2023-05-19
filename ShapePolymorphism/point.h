#ifndef POINT_H
#define POINT_H
#include "shape.h"
class Point: public Shape{
	protected:
		int x;
		int y;
	public:
		Point(int a,int b);
		void printShape(ostream& t);
	
};
#endif