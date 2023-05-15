#include "list.h"
#include "skater.h"
#include <string>
/*******************************************************************************
function:Skater
input:string c, and float s
output:none
 ********************************************************************************
 Pseudocode
 Begin
    country = c
    score = s
 End
 *******************************************************************************/
 Skater:: Skater(string c, float s){
    country = c; //country = c
    score = s; //score = s
}
/*******************************************************************************
function:getScore
input:none
output:score
 ********************************************************************************
 Pseudocode
 Begin
    return score
 End
 *******************************************************************************/
float Skater :: getScore(){
    return score;//return score
}
/*******************************************************************************
function:getcountry
input:none
output:country
 ********************************************************************************
 Pseudocode
 Begin
    return country
 End
 *******************************************************************************/
string Skater:: getCountry(){
    return country;//return country
}
/*******************************************************************************
function:Skater *getNext
input:none
output:pointer
 ********************************************************************************
 Pseudocode
 Begin
    return next
 End
 *******************************************************************************/
Skater *Skater::getNext(){
    return next;//return next
}
/*******************************************************************************
function:setNext(Skater *p)
input:Skater *p
output:none
 ********************************************************************************
 Pseudocode
 Begin
    next = p
 End
 *******************************************************************************/
void Skater::setNext(Skater *p){
    next = p;//next = p
}