#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;
class Node{
	public:
		int value;
		Node *left;
		Node *right;
		Node (int x){
			value = x;
			left = right = NULL;
		}
};

#endif


