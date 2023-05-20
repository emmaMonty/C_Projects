#ifndef BINARYTREE_H
#define BINARYTREE_H
#include "Node.h"
	class BTree{
		public:
			Node *root;
			void printTree(Node *n,ofstream& ofile);
			void add(Node *n,int value);
			Node* remove(Node *n, int value);
			void clean(Node *n);
			BTree();
			~BTree();
	};
#endif