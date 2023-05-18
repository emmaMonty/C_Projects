#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;
class Point{
	protected:
		int x;
		int y;
	public:
		Point(int a,int b);
		friend ostream& operator<<(ostream& t, const Point& param);
	
};
#endif