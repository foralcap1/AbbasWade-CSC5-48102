/* 
   File:   main
   Author: Abbas, Wade
   Created on September, 27th 2016, 7:47 PM
   Purpose: To get the amount of total profits after paying distributor
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //For fixed point notation, one decimal point percision
#include <string>     //To get the movie title and keep the white spaces if--
                      //needed.

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    unsigned short aSold,cSold;
    float          aTot,cTot,pDist,
                   grsBx,netBx;
    string         movie; 
    
    //Ask the user to input the movie they sold tickets for
    cout<<"What was the name of the movie that was being shown?"<<endl;
    getline(cin, movie);
    
    //How many of each ticket was sold that night 
    cout<<"How many adult tickets were sold during this showing?"<<endl;
    cin>>aSold;
    cout<<"How many child tickets were sold during this showing?"<<endl;
    cin>>cSold;
    
    //Calculate sale totals
    aTot=aSold*10;
    cTot=cSold*6;
    grsBx=aTot+cTot;
    netBx=grsBx*.2;
    pDist=grsBx-netBx;
    
    //Output sales
    cout<<setprecision(2)<<fixed;
    cout<<"Movie Name:                  \""<<movie<<"\""<<endl;
    cout<<"Adult Tickets Sold:            "<<aSold<<endl;
    cout<<"Child Tickest Sold:            "<<cSold<<endl;
    cout<<"Gross Box Office Profit:     $ "<<grsBx<<endl;
    cout<<"Net Box Office Profit:       $ "<<netBx<<endl;
    cout<<"Amount Paid to Distributor:  $ "<<pDist<<endl;
    
    
    
    
    
    return 0;
}

