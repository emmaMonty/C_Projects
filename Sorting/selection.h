#ifndef SELECTION_H
#define SELECTION_H
using namespace std;
#include <iostream>
template <class T>
class Selection{
	private:
		void sort(T *, int);
	public:
		Selection(T *, int);
		void print(T *, int);
};
/*******************************************************************************
Function:Selection
input:Array and N
output:none 
Begin
	call Sort
End
********************************************************************************/
template <class T>
Selection<T>::Selection(T *arr, int n){
	sort(arr, n); //call Sort
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
void Selection<T>::print(T *arr, int n){
	for(int i =0; i<n; ++i){ //for loop
		cout<<arr[i]<<" "; //cout array
	}
	cout<<endl;//cout endl
}
/*******************************************************************************
Function:sort
input:array and N
output:none
Begin
	for (j = 0; j < n-1; j++) 
		iMin = j
		for (i = j+1; i < n; i++) 
			if (a[i] < a[iMin]) 
				iMin = i

    if (iMin != j) 
        swap(a[j], a[iMin])
End
********************************************************************************/
template <class T>
void Selection<T> ::sort(T *Arr, int n){
int iMin;
int j;
T temp;
	for(j =0; j <n-1; j++){//for (j = 0; j < n-1; j++) 
		iMin =j; //iMin = j
		for(int i = j+1; i <n; i++){ //for (i = j+1; i < n; i++)
			if(Arr[i] <Arr[iMin]){ //if (a[i] < a[iMin]) 
				iMin =i;//iMin = i
			}
		}
	if(iMin !=j){ //if (iMin != j) 
		//swap(a[j], a[iMin])
		temp = Arr[j];
		Arr[j] = Arr[iMin];
		Arr[iMin] =temp;
	}
	}
}
#endif