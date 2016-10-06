/* 
   File:   main
   Author: Abbas, Wade
   Created on October, 4th 2016, 7:14 PM
   Purpose: To challenge user to make estimate of an exact dollar using US coins
 */

//System Libraries
#include <iostream>   //Input/Output object
#include <iomanip>    //setting coins precision 
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    unsigned short          pen=1,     //pennies value
                            nick=5,    //nickels value
                            dimes=10,  //dimes value 
                            quart=25,  //quarters value
                            halfD=50,   //half dollars value
                            total;     //total of coins  
    
    unsigned short          Up,        //users pennies
                            Un,        //users nickels
                            Ud,        //users dimes
                            Uq,        //users quarters
                            Uh;        //users half-dollars
    
    //Ask user to input how many of each coin he has
    cout<<"Please input how many pennies you have:"<<endl;
    cin>>Up;
    cout<<"Please input how many nickels you have:"<<endl;
    cin>>Un;
    cout<<"Please input how many dimes you have:"<<endl;
    cin>>Ud;
    cout<<"Please input how many quarters you have:"<<endl;
    cin>>Uq;
    cout<<"Please input how many half-dollars you have:"<<endl;
    cin>>Uh;
    
    //calculate whether the user has a dollar, is over, or under 
    total=(pen*Up)+(nick*Un)+(dimes*Ud)+(quart*Uq)+(halfD*Uh);
    
    //Notify the result of how much money the user has by his input
    if      (total == 100)
            cout<<"\nAMAZING! YOU HAVE THE EXACT CHANGE TO MAKE A DOLLAR!"<<endl;
    else if (total < 100)
            cout<<"I'm sorry, you don't have enough coins to make a dollar."<<endl;
    else if (total > 100)
            cout<<"I'm sorry, you have TOO many coins."<<endl;
    //Exit Program
    return 0;
}