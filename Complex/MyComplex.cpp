/*******************************************************************************
Emma Montgomery         A02321679

Summary: this program adds, subtracts, and multiples complex number
input:none
output:none

Function:my complex

Psuedocode
*******************************************************************************
Begin

 End
*******************************************************************************/
#include <iostream>
#include "MyComplex.h"
using namespace std;
MyComplex ::MyComplex(){

}
/*******************************************************************************
input: rp and ip
output:none

        Function:my complex

Psuedocode
*******************************************************************************
Begin
	real = rp
	imagine = ip
End
*******************************************************************************/
MyComplex:: MyComplex(float rp, float ip){
	real = rp; //real = rp
	imagine = ip;//imagine = ip
}
/*******************************************************************************
input:none
output:none

Function:operator+

Psuedocode
*******************************************************************************
Begin
	cout real
	if imagine >0
		cout +
	else
		cout -
	cout abs(imagine)
	cout i
End
*******************************************************************************/
void MyComplex :: printMyComplex(){
	cout<<real; //cout real
	if (imagine >0) //if imagine >0
		cout<< " + "; //cout +
	else //else
		cout<<" - "; //cout -
	cout<<abs(imagine);//cout abs(imagine)
	cout<<"i";//cout i
}
/*******************************************************************************
input:none
output:none

Function:operator+

Psuedocode
*******************************************************************************
Begin
    MyComplex ret
    ret.real = real +param.real
    ret.imagine= imagine + param.imagine
	return ret
End
*******************************************************************************/
MyComplex MyComplex :: operator+ (const MyComplex &param){
	MyComplex ret;//MyComplex ret

    ret.real = real +param.real;//ret.real = real +param.real
	//ret.imagine= imagine + param.imagine
    ret.imagine= imagine + param.imagine;
	return ret;//return ret
}
/*******************************************************************************
input:none
output:none

Function:operator-

Psuedocode
*******************************************************************************
Begin
	MyComplex ret
    ret.real = real - param.real
    ret.imagine= imagine - param.imagine
	return ret
End
*******************************************************************************/
MyComplex  MyComplex :: operator- (const MyComplex &param){
	MyComplex ret;//MyComplex ret

    ret.real = real - param.real;//et.real = real - param.real
	//ret.imagine= imagine - param.imagine
    ret.imagine= imagine - param.imagine;
	return ret;//return ret
}
/*******************************************************************************
input:none
output:none

Function:operator*

Psuedocode
*******************************************************************************
Begin
	MyComplex ret
	ret.real = real * param.real
	ret.real -=(imagine * param.imagine)
	ret.imagine = real * param.imagine
	ret.imagine += (imagine * param.real)
	return ret

End
*******************************************************************************/
MyComplex  MyComplex :: operator* (const MyComplex &param){
	MyComplex ret;//MyComplex ret

	ret.real = real * param.real;//ret.real = real * param.real
	//ret.real -=(imagine * param.imagine)
	ret.real -=(imagine * param.imagine);
	ret.imagine = real * param.imagine;//ret.imagine = real * param.imagine
	//ret.imagine += (imagine * param.real)
	ret.imagine += (imagine * param.real);
	return ret;//return ret
}