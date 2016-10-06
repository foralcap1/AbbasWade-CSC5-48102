/* 
   File:   main
   Author: Abbas, Wade
   Created on October, 4th 2016, 5:19 PM
   Purpose: To Determine if any input date is a "Magic Day"
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //For fixed point notation, one decimal point percision
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    unsigned short month, day, year; //User's input that will determine if the 
                                     //date given is a magic day
    
    //Tell user to input the da, month and year
    cout<<"Please input the month in number format: "<<endl;
    cin>>month;
    cout<<"Please input the day: "<<endl;
    cin>>day;
    cout<<"Please input the year in two-digit format: "<<endl;
    cin>>year;
    
    //Output whether the date input is a magic date
    if ((day*month) == year)
        cout<<"This is a MAGIC DATE!"<<endl;
    else if ((day*month) != year)
        cout<<"This is NOT a magice date :("<<endl;
    
    
    
    //Exit Program
    return 0;
}