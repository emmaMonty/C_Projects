#ifndef BUBBLE_H
#define BUBBLE_H
#include <iostream>
using namespace std;
template <class T>
class Bubble{
	private:
	void sort(T *, int);
	public:
		Bubble(T *, int);
		void print(T *, int);

};
/*******************************************************************************
Function:Buble
input:Array and N
output:none 
Begin
	call sort
End
********************************************************************************/
template <class T>
Bubble<T>::Bubble(T *arr, int n){
	sort(arr, n); //call sort
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
void Bubble<T>::print(T *arr, int n){
	for(int i =0; i<n; ++i){ //for loop
		cout<<arr[i]<<" "; //cout array
	}
	cout<<endl; //cout endl
}
/********************************************************************************
Function:sort
input:Array and N
output:none
Begin
  swapped = true
  while swapped
    swapped = false
    for i = 1 to n-1 inclusive do
      if A[i-1] > A[i] then
        swap( A[i-1], A[i] )
        swapped = true
End
********************************************************************************/
template <class T>
void Bubble<T>::sort(T *arr, int n){
 T temp;
 bool swapped = true; //swapped = true
while(swapped){ //while swapped
	swapped = false; // swapped = false
	for(int i =0; i<= n-1;i++){ //for i = 1 to n-1 inclusive do
		if(arr[i-1]>arr[i]){//if A[i-1] > A[i] then
		//swap( A[i-1], A[i] )
			temp = arr[i-1];
			arr[i-1] = arr[i];
			arr[i] = temp;
			swapped = true;//swapped = true
		}
	}
}
}
#endif