/* 
   File:   main
   Author: Abbas, Wade
   Created on September 14th, 2016, 3:57 PM
   Purpose:  
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    unsigned short numbr1=50; //first integer represented
    unsigned short numbr2=100;//second integer represented
    unsigned short total;
    
    total=numbr1+numbr2;
    
    //Display Output
    cout<<"The total of the first integer   "<<numbr1<<endl;
    cout<<"and the second integer          "<<numbr2<<endl;
    cout<<"                              -----"<<endl;
    cout<<"Gives us a total of           = "<<total<<endl;
    //Exit Program
    return 0;
}