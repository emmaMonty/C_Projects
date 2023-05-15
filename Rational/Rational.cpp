#include "Rational.h"
#include <cmath>
/*******************************************************************************
Function title :Rational
input:int n and d
output:none
psuedocode
/*******************************************************************************
Begin
	num = n
	demon = d
End
*******************************************************************************/
Rational::Rational(int n, int d) {
	num = n;
	demon = d;
}
/*******************************************************************************
Function title :GCD
input:int n and d
output:d, GCD(d % n, n);
psuedocode
/*******************************************************************************
Begin
if (n == 0)
		return d;
	return GCD(d % n, n);
End
*******************************************************************************/
int Rational::GCD(int n, int d) {//Begin
	if (n == 0)
		return d;
	return GCD(d % n, n);
}//End
/*******************************************************************************
Function title :add
input:int n and d
output:nonepsuedocode
/*******************************************************************************
Begin
	int temp = demon
	num *= d
	demon *= d
	n *= temp
	d *= temp
	num += n
	int gcd = GCD(num, demon)
	num /= gcd
	demon /= gcd
End
*******************************************************************************/
void Rational::add(int n, int d) {//Begin
	int temp = demon; //int temp = demon
	num *= d; //num *= d
	demon *= d; //demon *= d
	n *= temp; //n *= temp
	d *= temp; //d *= temp
	num += n;//num += n
	int gcd = GCD(num, demon); //int gcd = GCD(num, demon)
	num /= gcd; //num /= gcd
	demon /= gcd; demon /= gcd;
}
//End
/*******************************************************************************
Function title :sub
input:num and demon
output:none
psuedocode
/*******************************************************************************
Begin
	add(-n, d)
End
*******************************************************************************/
void Rational::sub(int n, int d) {//Begin
	add(-n, d); //add(-n, d)
}//End
/*******************************************************************************
Function title :mul
input:n and d
output:none
psuedocode
/*******************************************************************************
Begin
	num *= n 
	demon *= d 
	num /= GCD(n, d)
	demon /= GCD(n, d)
End
*******************************************************************************/
void Rational::mul(int n, int d){//Begin
	num *= n; //num *= n 
	demon *= d; //demon *= d 
	num /= GCD(n, d); //num /= GCD(n, d)
	demon /= GCD(n, d); //demon /= GCD(n, d)
}//End
/*******************************************************************************
Function title :div
input:n and d
output:none
psuedocode
/*******************************************************************************
Begin
	mul(d, n)
End
*******************************************************************************/
void Rational::div(int n, int d){//Begin
	mul(d, n); //mul(d, n)
}//End
/*******************************************************************************
Function title :get num
input:none
output:n
psuedocode
/*******************************************************************************
Begin
	return num
End
*******************************************************************************/
int Rational::getNum() { //Begin
	return num; //return num
}//End
/*******************************************************************************
Function title :getDemon
input:none
output:d
psuedocode
/*******************************************************************************
Begin
	return demon
End
*******************************************************************************/
int Rational::getDemon() { //Begin
	return demon; //return demon;
}//End
