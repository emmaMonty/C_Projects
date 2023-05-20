#include<iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include "BinaryTree.h"
using namespace std;
/*******************************************************************************
BTree
input:none
output:none
********************************************************************************
begin 
	root=Null
end
*******************************************************************************/
BTree::BTree(){
	root = NULL;//root=Null
}
/*******************************************************************************
~BTree
input:none
output:none
********************************************************************************
begin 
	clean(root)
end
*******************************************************************************/
BTree:: ~BTree(){
	clean(root); //clean(root)
}
/*******************************************************************************
clean
input:pointer
output:none
********************************************************************************
begin 
	if(n !=NULL)
		clean(n->left)
		clean(n->right)
		delete n
end
*******************************************************************************/
void BTree::clean(Node* n){
	if(n !=NULL){//if(n !=NULL)
		clean(n->left);//clean(n->left)
		clean(n->right);//clean(n->right)
		delete n;//delete n
	}
}
/*******************************************************************************
add node
Input: value,pointer
output: None
********************************************************************************
Begin
	Create new node
	if(root == NULL)
		root = newNode
	else
		temp = root
		forever loop
			if(newNode -> value < temp->value)
				if(temp->left != NULL)
					temp = temp -> left 
				else
					temp -> left = newNode
					return
			else if(newNode -> value > temp->value)
				if(temp->right != NULL)
					temp = temp -> right
				else
					temp -> right = newNode
					return
			else
				delete newNode
				return
	return
End
*******************************************************************************/
void BTree:: add(Node *n,int value){
	Node * temp,  *newNode;
	newNode = new Node(value); //Create new node
	if(root == NULL){//if(root == NULL)
		root = newNode;//root = newNode
	}
	else{ //else
		temp = root;//temp = root
		while(1){ //forever loop
			//if(newNode -> value < temp->value)
			if(newNode -> value < temp->value){
				if(temp->left != NULL){//if(temp->left != NULL)
					temp = temp -> left ;//temp = temp -> left 
				}
				else{//else
					temp -> left = newNode;//temp -> left = newNode
					return;//return
				}
			}
			//else if(newNode -> value > temp->value)
			else if(newNode -> value > temp->value){
				if(temp->right != NULL){//if(temp->right != NULL)
					temp = temp -> right;//temp = temp -> right
				}
				else{//else
					temp -> right = newNode; //temp -> right = newNode
					return;//return
				}
			}
			else{//else
				delete newNode;//delete newNode
				return;//return
			}
		}
	}
	return;//return
}
/*******************************************************************************
printTree
input: pointer to n, ostream
Output: none
********************************************************************************
Begin
  If n   
	temp = log10(n->value)
	print n’s left subtree    
	print n 
	print n’s right subtree
End
********************************************************************************/
void BTree::printTree(Node *n,ofstream& ofile){
	if(n != NULL){//If n  
		double temp;
		temp = log10(n->value);//temp = log10(n->value)
		printTree(n->left, ofile);//print n’s left subtree
		//print n 
		ofile<<n->value<< "\t";
		ofile << setprecision(5)<<temp<<endl;
		printTree(n->right,ofile);//print n’s right subtree
	}
}
/********************************************************************************
remove
input: value, and pointer
output: ponter
**********************************************************************************
Begin
	if node is null
		return 
	else if n -> value> val
		n -> left = remove(n-> left, val)
		return
	else if val > n -> value
		n -> right = remove(n -> right, val)
		return
	else
		if(n->left ==NULL && n-> right == NULL)
			delete n
			return NULL
		else if (root -> left == NULL)
			Node *temp = n ->right;
			delete n
			return
		else if (n -> right ==NULL)
			Node *temp = n ->left
			delete n
			return
		else
			Node* succParent = n
			Node* succ root -> right
			while(succ ->left != NULL)
				succParent = succ
				succ = succ ->left
			
			if (succParent != n)
				succParent->left = succ->right
			else
				succParent->right = succ->right
			n -> value = succ -> value
			delete succ
	return 
End
/*********************************************************************************/
Node* BTree::remove(Node *n,int val){
	if (n == NULL){ //if node is null
		return n;//return 
	}
	else if (n -> value> val){//else if n -> value> val
		//n -> left = remove(n-> left, val)
		n-> left = remove(n-> left, val);
		return n;//return 
	}
	else if (val > n -> value){//else if (val > n -> value)
		//n -> right = remove(n -> right, val)
		n -> right = remove(n -> right, val);
		return n;//return 
	}
	else{//else
		//if(n->left ==NULL && n-> right == NULL)
		if(n->left ==NULL && n-> right == NULL){
			delete n;//delete n
			return NULL;//return 
		}
		else if (n -> left == NULL){//else if (n -> left == NULL)
			Node *temp = n ->right;//Node *temp = n ->right;
			delete n;//delete n
			return temp;//return 
		}
		else if (n -> right == NULL){//else (if n -> right ==NULL)
			Node *temp = n ->left;//Node *temp = n ->left
			delete n;//delete n
			return temp;//return 
		}
		else{//else
			Node* succParent = n;//Node* succParent = n
	
			Node* succ = n -> right;//Node* succ root -> right
			while(succ ->left != NULL){//while(succ ->left != NULL)
				succParent = succ;//succParent = succ
				succ = succ ->left;//succ = succ ->left
			}	
			if (succParent != n){//if (succParent != n)
				succParent->left = succ->right;//succParent->left = succ->right
			}
			else{//else
				succParent->right = succ->right;//succParent->right = succ->right
			}
			n -> value = succ -> value;//n -> value = succ -> value
			delete succ;//delete succ
		}
		return n;//return 
	}
/*********************************************************************************/
}