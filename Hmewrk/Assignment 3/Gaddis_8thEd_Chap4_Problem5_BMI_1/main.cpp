/* 
   File:   main
   Author: Abbas, Wade
   Created on October, 3rd 2016, 5:58 PM
   Purpose: To Determine Whether or Not A User's BMI is Op, Below or Over
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //For fixed point notation, one decimal point percision
#include <cmath>      //Used for placing power on height
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    unsigned short iWght, //Users input weight in pounds
                   iHght; //User's input of height in inches
    float          BMI;   //Output  of User's BMI
    
    //Ask the user to input their height in inches and weight in pounds
    cout<<"Please input your weight rounded to the nearest pound\n";
    cout<<"Then press ENTER."<<endl;
    cin>>iWght;
    
    cout<<"Now please enter your height rounded to the nearest inch.\n";
    cout<<"Then press ENTER."<<endl;
    cin>>iHght;
    
    //Calculate the User's height and weight and output BMI
    BMI=(iWght*703)/pow(iHght, 2.0);
    
    //Output the calculations
    cout<<setprecision(1)<<fixed<<endl;
    cout<<"Your BMI is: "<<BMI<<"%."<<endl;
    cout<<((BMI >= 25.0f)?"This is considered overweight.":
           (BMI <= 24.9f && BMI >= 18.5f)?"This is considered optimal.":
           (BMI <= 18.4f)?"This is considered underweight.":"test")<<endl;
//    
    //Exit Program
    return 0;
}