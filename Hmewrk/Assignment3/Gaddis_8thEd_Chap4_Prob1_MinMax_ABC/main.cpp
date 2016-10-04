/* 
  File:   main.cpp
  Author: Abbas, Wade
  Created on October 4, 2016, 11:00 AM
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
    int   a,b,c; //the users input 
    
    cout<<"Please enter the first number, then press ENTER."<<endl;
    cin>>a;
    cout<<"Please enter the second number, then press ENTER."<<endl;
    cin>>b;
    cout<<"Please enter the third number, then press ENTER."<<endl;
    cin>>c;
   
    if      ((a > b) && (b > c) && (a > c))
        cout<<"The numbers from greatest to smallest is "<<a<<", "<<b<<", "<<c<<endl;
    
    else if ((a > b) && (c > b) && (a > c))
        cout<<"The numbers from greatest to smallest is "<<a<<", "<<c<<", "<<b<<endl;
    
    else if ((b > a) && (a > c) && (b > c))
        cout<<"The numbers from greatest to smallest is "<<b<<", "<<a<<", "<<c<<endl;
    
    else if ((b > a) && (c > a) && (b > c))
        cout<<"The numbers from greatest to smallest is "<<b<<", "<<c<<", "<<a<<endl;
    
    else if ((c > a) && (a > b) && (c > b))
        cout<<"The numbers from greatest to smallest is "<<c<<", "<<a<<", "<<b<<endl;
    
    else if ((c > a) && (b > a) && (c > b))
        cout<<"The numbers from greatest to smallest is "<<c<<", "<<b<<", "<<a<<endl;
           
    return 0;
}


