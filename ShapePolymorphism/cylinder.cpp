#include <iostream>
#include "shape.h"
#include "point.h"
#include "circle.h"
#include "cylinder.h"
using namespace std;
int main()
{
	Shape *s[3];
	Point p(4,4);
	Circle c(5,5,5);
	Cylinder y (6, 6, 6, 6);
	s[0] = &p;
	s[1] = &c;
	s[2] = &y;
	cout << *(s[0]) << endl << endl;
	cout << *(s[1]) << endl << endl;
	cout << *(s[2]) << endl << endl;
	return 0;
}