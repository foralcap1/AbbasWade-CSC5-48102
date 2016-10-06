/* 
  File:   main.cpp
  Author: D
  Created on July 19, 2016, 9:07 AM
  Purpose: Determine which number the user inputs is the greatest of value and 
  place them in order from smallest to greatest
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int   a,b; //the users input 
    
    cout<<"Please enter the first number, then press ENTER."<<endl;
    cin>>a;
    cout<<"Please enter the second number, then press ENTER."<<endl;
    cin>>b;
    
    if (a > b)
         cout<<"The number "<<a<<" is larger than "<<b<<"."<<endl;
    else cout<<"The number "<<b<<" is larger than "<<a<<"."<<endl;
   
    
    
    return 0;
}


