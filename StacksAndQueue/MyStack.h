#include <iostream>
using namespace std;

#ifndef MYSTACK_H
#define MYSTACK_H
#define MAX 10
template <class T>
class MyStack{
	T top;
	T size1;
	public:
	T a[MAX];
	MyStack();
	T peek();
	T pop ();
	void push(T value);
	void clear();
	int size ();
	bool full ();
	bool empty ();
};
/*******************************************************************************
Function:MyStack
input:none
output:none
Psuedocode
Begin
	top = 0
	size1 = 0
End
*********************************************************************************/
	template <class T>
	MyStack<T>::MyStack(){
		top = 0;
		size1 = 0;
	}
/*******************************************************************************
Function:peek
input:none
output:none
Psuedocode
Begin
	try 
		if (top <= 0) 
			throw(1)
	catch(int e)
		cout Exception: Tried to peek at an empty stack
	T x = a[top-1]
	return x
End
*********************************************************************************/
	template <class T>
	T MyStack<T>::peek(){
		try{//try
			if (top <= 0) {//if (top <= 0) 
				throw(1);//throw(1)
		}
		}
		catch(int e){//catch(int e)
		//cout Exception: Tried to peek at an empty stack
			cout << "Exception: Tried to peek at an empty stack!" << endl;
			return 0;
		}
		T x = a[top-1];//T x = a[top-1]
		return x;//return x
	}
/*******************************************************************************
Function:pop
input:none
output:none
Psuedocode
Begin
		try
			if (top <= 0)
				throw(1)
		catch(int e)
			cout Exception: Tried to pop at an empty stack!
		top--
		T x = a[top]
		size1--
		return x
End
*********************************************************************************/
	template <class T>
	T MyStack<T>::pop(){
		try{//	try
			if (top <= 0){//if (top <= 0)
				throw(1);//throw(1)
			}
		}
		catch(int e){ //catch(int e)
		//cout Exception: Tried to pop at an empty stack!
			cout << "Exception: Tried to pop at an empty stack!"<<endl;
			return 0;
		}
		top--;//top--
		T x = a[top];//T x = a[top]
		size1--;//size1--
		return x;//return x
	
	}
/*******************************************************************************
Function:push
input:vaule
output:none
Psuedocode
Begin
	try
		if (top >= (MAX))
				throw(1)
	catch(int e)
		cout Exception: Tried to push at a full stack!
		return
	a[top] = value
	++top
	size1 += 1
End
*********************************************************************************/
	template <class T>
	void MyStack<T>::push(T value){
		try{//	try
			if (top >= (MAX)){//if (top >= (MAX))
				throw(1);//throw(1)
			}
		}
		catch(int e){//catch(int e)
		//cout Exception: Tried to push at a full stack!
			cout << "Exception: Tried to push at a full stack!" << endl;
			return;//return
		}
		a[top] = value;//a[top] = value
		++top;//++top
		size1 += 1;//size1 += 1
	}
/*******************************************************************************
Function:clear
input:none
output:none
Psuedocode
Begin
	top = 0
End
*********************************************************************************/
	template <class T>
	void MyStack<T>::clear(){
		top = 0;//top = 0
	}
/*******************************************************************************
Function:size
input:none
output:none
Psuedocode
Begin
	return top
End
*********************************************************************************/
	template <class T>
	int MyStack<T>::size(){
		return top;//return top
	}
/*******************************************************************************
Function:full
input:none
output:none
Psuedocode
Begin
	if(top >= MAX)
			return true
	else
		return false
End
*********************************************************************************/
	template <class T>
	bool MyStack<T>::full(){
		if(top >= MAX){
			return true;//return true
		}
		else{
			return false;//return false
		}
	}
/*******************************************************************************
Function:empty
input:none
output:none
Psuedocode
Begin
	if(top <= 0)
		return true
		
	else
		return false
End
*********************************************************************************/
	template <class T>
	bool MyStack<T>::empty(){
		if(top <= 0){
			return true;//return true
		}
	else{
		return false;//return false
		}
	}
#endif