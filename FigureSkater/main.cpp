/*******************************************************************************
Emma Montgomery				A02321679

Summary:A program that keeps tract of a countries and scores of figure
skaters

intput:none
output:none

Function:Main

Psuedocode
********************************************************************************
Begin
    make object
	while loop
		print menu
		print options
		if 1
            ask for country
            store country
            ask for score 
            store score
            add node
		else if 2
            print rankings
            void print list
		else if 0
            x+=1
End
*******************************************************************************/
#include <iostream>
#include "list.h"
#include "skater.h"
#include <string>
using namespace std;

int main(){//Begin
    int x,sel;
    string country;
    float score;
    x =0;
    List L;//make object
    while(x ==0){//while loop
        cout << endl;
        cout<<"*** MENU ***"<<endl;//print menu
        //print options
        cout<<"1. Enter a new team and score"<<endl;
        cout<<"2. Print Rankings"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Selection: ";
        cin>> sel;
        if(sel ==1){ //if 1
            cout<<"Enter nation: ";//ask for country
            //store country
            cin.ignore();
            getline(cin, country);
            cout<<"Enter score: ";//ask for score 
            cin>>score;//store score
            L.addNode(country, score); //add node
        }
        else if (sel == 2) {//else if 2
            cout << endl;
            cout<<"***RANKINGS***"<<endl;//print rankings
            L.printList(); //void print list
            cout << endl;
        }
        else if(sel == 0){//else if 0
            x +=1; //x+=1
        }
    }
    return 0;
}