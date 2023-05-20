#ifndef QUICK_H
#define QUICK_H
#include <iostream>
using namespace std;
template <class T>
class Quick{
	private:
	void sort(T *, int, int);
	int partition(T*, int, int);
	public:
		Quick(T *, int);
		void print(T *, int);
};
/*******************************************************************************
Function:Quick
input:Array and N
output:none 
Begin
	call sort
End
********************************************************************************/
template <class T> 
Quick<T>::Quick(T *Arr, int n){
	sort(Arr,0,n-1); //call sort
}
/*******************************************************************************
function print
input:a point, and int
output none
Psuedocode
********************************************************************************
begin
	for loop
		cout array
	cout endl
********************************************************************************/
template <class T>
void Quick<T>::print(T * arr, int n){
	for(int i =0; i<n; ++i){//for loop
		cout<<arr[i]<<" "; //cout array
	}
	cout<<endl;//cout endl
}
/*******************************************************************************
function sort
input:Array, low, high
output:none
Psuedocode
********************************************************************************
Begin	
	if lo < hi then
	    p = partition(A, lo, hi)
	    sort(A, lo, p - 1 )
	    sort(A, p + 1, hi)
End
********************************************************************************/
template <class T>
void Quick<T>::sort(T *Arr, int low,int high){
if (low<high){//if lo < hi then
	int p =partition(Arr, low, high);//p = partition(A, lo, hi)
	sort(Arr, low, p-1);//sort(A, lo, p - 1 )
	sort(Arr, p+1,high);//sort(A, p + 1, hi)
	}
}	
/*******************************************************************************
Function:partition
input:Arr, low, high
output:int
Begin
    pivot = A[hi]
	i = low - 1    
	for j = lo to hi - 1 do
	    if A[j] < pivot 
	      i = i + 1
	      swap A[i] with A[j]
	swap A[i + 1] with A[hi]
	return i + 1
End
********************************************************************************/
template <class T>
int Quick<T>::partition(T* Arr,int low,int high){
	int i = low -1;  //i = low - 1  
	int j;
	T temp, temp1;
	T pivot =Arr[high];//pivot = A[hi]
	for(j = low; j < high;j++){//for j = lo to hi - 1 do
		if( Arr[j] < pivot){//if A[j] < pivot 
			i++;//i = i + 1
			//swap A[i] with A[j]
			temp = Arr[i];
			Arr[i] = Arr[j];
			Arr[j] = temp;
		}
	}
	//swap A[i + 1] with A[hi]
	temp1 = Arr[i +1];
	Arr[i +1] = Arr[high];
	Arr[high] = temp1;
	//return i + 1	
	return i+1;
}
#endif