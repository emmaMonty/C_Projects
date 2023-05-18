#include <iostream>
using namespace std;

#ifndef MYQUENE_H
#define MYQUENE_H
#define MAX 10
template <class T>
class MyQueue{
	T head,size1;
	T tail;
	public:
	T a[MAX];
	MyQueue();
	T peek();
	T pop ();
	void push(T value);
	void clear();
	int size ();
	bool full ();
	bool empty ();
};
/*******************************************************************************
Function:MyQueue
input:none
output:none
Psuedocode
Begin
	head = 0
	size1 = 0
	tail = 1
End
*********************************************************************************/
	template <class T>
	MyQueue<T>::MyQueue(){
		head = 0;//head = 0
		size1 = 0;//size1 = 0
		tail = 1;//tail = 1
	}
/*******************************************************************************
Function:peek
input:none
output:none
Psuedocode
Begin
	try 
		if (empty()) 
			throw(1)
	catch (int e) 
		cout Exception: Tried to peek at an empty quene!
	T x = a[tail]
	return x
End
*********************************************************************************/
	template <class T>
	T MyQueue<T>::peek(){
		try {//try
			if (empty()) {//if (empty())
				throw(1);//throw(1)
			}
		}
		catch (int e) {//catch(int e)
		//cout Exception: Tried to peek at an empty quene!
			cout << "Exception: Tried to peek at an empty quene!" << endl;
			return 0;
		}
		T x = a[tail];//T x = a[tail]
		return x;//return x
	}
/*******************************************************************************
Function:pop
input:none
output:none
Psuedocode
Begin
	try
		if(empty())
			throw(1)
	catch(int e)
		cout Exception: Tried to pop at an empty quene!
	T x = a[tail]
	tail++
	if (tail == 10) 
		tail = 0
	size1 -=1
	return x
End
*********************************************************************************/
	template <class T>
	T MyQueue<T>::pop(){
		try{//try
			if(empty()){//if(empty())
				throw(1);//throw(1)
			}
		}
		catch(int e){//catch(int e)
		//cout Exception: Tried to pop at an empty quene!
			cout << "Exception: Tried to pop at an empty quene!"<<endl;
			return 0;
		}	
		T x = a[tail];//T x = a[tail]
		tail++;//tail++
		if (tail == 10) { //if (tail == 10) 
			tail = 0;//tail = 0
		}
		size1 -=1;//size1 -=1
		return x;//return x
	}
/*******************************************************************************
Function:push
input:value
output:none
Psuedocode
Begin
	try
		if(full())
			throw (1)
	catch(int e)
		cout Exception: Tried to push at a full quene!
	head++
	if (head == 10) 
		head = 0
	a[head] = value
	size1 += 1
End
*********************************************************************************/
	template <class T>
	void MyQueue<T>::push(T value){
		try{//try
			if(full()){//if(full())
				throw (1);//throw(1)
			}
		}
		catch(int e){//catch(int e)
		//cout Exception: Tried to push at a full quene!
			cout << "Exception: Tried to push at a full quene!" << endl;
			return;
		}
		head++;//head++
		if (head == 10) {//if (head == 10) 
			head = 0;//head = 0
		}
		a[head] = value;//a[head] = value
		size1 += 1; //size1 += 1
		return;
	}
/*******************************************************************************
Function:clear
input:none
output:none
Psuedocode
Begin
	size1 =0
	head = 0
	tail =1
End
*********************************************************************************/
	template <class T>
	void MyQueue<T>::clear(){
	
		size1 =0;//size1 = 0
		head = 0;//head = 0
		tail =1;//tail = 1
	}
/*******************************************************************************
Function:size
input:none
output:none
Psuedocode
Begin
	return size1
End
*********************************************************************************/
	template <class T>
	int MyQueue<T>::size(){
		return size1;//size1
	}
/*******************************************************************************
Function:full
input:none
output:none
Psuedocode
Begin
	if(size1 == 10)
		return true
	else
		return false
End
*********************************************************************************/
	template <class T>
	bool MyQueue<T>::full(){
		if(size1 == 10){//if(size1 == 10)
			return true;//return true
		}
		else{//else
			return false;//return false
		}
	}
/*******************************************************************************
Function:empty
input:none
output:none
Psuedocode
Begin
	if(size1==0)
		return true
	else
		return false
End
*********************************************************************************/
	template <class T>
	bool MyQueue<T>::empty(){
		if(size1==0){
			return true;//return true
		}
		else{
			return false;//return false
		}
	}
	
	
#endif