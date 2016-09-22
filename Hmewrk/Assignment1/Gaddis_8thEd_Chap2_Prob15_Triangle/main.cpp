
/* 
  File:   main.cpp
  Author: Abbas, Wade 
  Purpose: To create a program that displays the triangle symbol after running
  Created on September 14, 2016, 3:30 PM
 */

#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    char s=' ';//The space character
    char x;    //Character used to create the triangle
    
    //Input values
    cout<<"What character would you like to use to make the triangle shape?"<<endl;
    cout<<"Input?"<<endl;
    cin>>x;
    
    //Process values -> Map inputs to Outputs
    
                 //triangle
    cout<<s<<s<<s<<x<<s<<s<<s<<endl;
    cout<<s<<s<<x<<x<<x<<s<<s<<endl;
    cout<<s<<x<<x<<x<<x<<x<<endl;
    cout<<x<<x<<x<<x<<x<<x<<x<<endl;
    cout<<s<<s<<s<<s<<s<<s<<s<<endl;

    //Exit Program
    return 0;
}

