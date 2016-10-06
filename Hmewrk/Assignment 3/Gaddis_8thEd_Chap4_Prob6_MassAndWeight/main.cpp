/* 
   File:   main
   Author: Abbas, Wade
   Created on October, 4th 2016, 5:44 PM
   Purpose: To Determine if an object is too heavy or too light in newtons
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
    float  w,m; //Input of mass and output of weight
    
    //Ask user to input the mass in kilograms
    cout<<"Please input the mass of the object in kilograms"<<endl;
    cin>>m;
    
    //Calculate the mass into weight to determine if the object is too heavy/light
    w=m*9.8;
    
    //Determine if the object is too heavy or light and output result 
    if (w > 1000)
        cout<<"The object weighs "<<w<<" newtons and is TOO heavy."<<endl;
    else if (w < 10)
        cout<<"The object weighs "<<w<<" newtons and is TOO light."<<endl;
    else if ((w > 10) && (w < 1000))
        cout<<"The object is "<<w<<" newtons."<<endl;
    
    //Exit Program
    return 0;
}