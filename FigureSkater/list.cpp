#include "list.h"
#include "skater.h"
#include <string>
#include <iostream>
using namespace std;
/*******************************************************************************
function:list
intput:none
output:none
********************************************************************************
Psuedocode
********************************************************************************
Begin
    head=nullptr
End
*******************************************************************************/
List ::List(){
    head = nullptr;//head=nullptr
}
/*******************************************************************************
function:~list
intput:none
output:none
********************************************************************************
Psuedocode
********************************************************************************
Begin
    for loop
        prev = cur
        cur = cur -> getNext
        delete prev
End
*******************************************************************************/
List :: ~List() {
    Skater* cur, *prev ;
    //for loop
    for (cur = head;
        cur != NULL;) {
        prev = cur;//prev = cur
        cur = cur->getNext();//cur = cur -> getNext
        delete prev;//delete prev
    }
}
/*******************************************************************************
function:addNode
input:country, score
output:none
 ********************************************************************************
 Pseudocode
 ********************************************************************************
 Begin
    Skater *p, *cur, *prev
    p = new Skater(country, score)
    for (cur != NULL and p ->getScore() > cur-> getScore
        prev = cur, cur = cur ->getcountry();
    p -> setnext(cur)
    if statement
        head = p
    else
        prev -> sextNext(p)

 *********************************************************************************/
 void List::addNode(string country, float score) {
        Skater *p, *cur, *prev;
        p =new Skater(country, score);
        for(cur = head, prev = NULL;
            cur != NULL && p ->getScore() < cur-> getScore();
            prev = cur, cur = cur->getNext());
            
        p->setNext(cur);//p -> setnext(cur)
        if (prev == NULL){//if statement
            head = p;//head = p
        }
        else{//else
            prev->setNext(p);//prev -> sextNext(p)
        }
    }
/*******************************************************************************
function:print list
intput:none
output:none
********************************************************************************
Psuedocode
********************************************************************************
Begin
    for (cur = head; cur != NULL;cur = cur->getNext()) 
        cout country and score
     }
End
*******************************************************************************/
 void List::printList() {
     Skater* cur;
     //for (cur = head; cur != NULL;cur = cur->getNext()) 
     for (cur = head;
         cur != NULL;
         cur = cur->getNext()) {
         //cout country and score
         cout << cur->getCountry() <<"\t"<< cur->getScore() << endl;
     }
 }
