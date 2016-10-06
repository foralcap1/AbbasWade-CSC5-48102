/* 
  File:   main.cpp
  Author: Abbas, Wade
  Created on October 4, 2016, 11:45 AM
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
    int   a,b,c,d; //the users input 
    
    cout<<"Please enter the first number, then press ENTER."<<endl;
    cin>>a;
    cout<<"Please enter the second number, then press ENTER."<<endl;
    cin>>b;
    cout<<"Please enter the third number, then press ENTER."<<endl;
    cin>>c;
    cout<<"Please enter the third number, then press ENTER."<<endl;
    cin>>d;
   
    if      ((a > b) && (b > c) && (b > d) && (a > d) && (c > d))
        cout<<"The numbers from greatest to smallest is "<<a<<", "<<b<<", "<<c<<", "<<d<<endl;


    return 0;
}


