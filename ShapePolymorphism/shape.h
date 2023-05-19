#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
using namespace std;
class Shape {
public:
	friend ostream& operator<<(ostream& t, Shape& param) {
		param.printShape(t);
		return t;
	}
	virtual void printShape(ostream& t)=0;
};
#endif